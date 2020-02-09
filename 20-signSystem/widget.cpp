#include "widget.h"
#include "ui_widget.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QCheckBox>
#include <QTableWidgetItem>
#include <QDateTime>
#include <QString>
#include <QMessageBox>
#include <QTableWidget>
#include "personalinformation.h"

Widget::Widget(QWidget *parent,QString sname) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->sname=sname;
    dataToTable("select * from student");
    displayClass();
    displaySno();
    connect(ui->tableWidget,QTableWidget::cellDoubleClicked,[=](int r,int c){
        PersonalInformation *p= new PersonalInformation();
        p->init(ui->tableWidget->item(r,0)->text(),ui->tableWidget->item(r,1)->text());
        p->show();

    });

}
//按学号显示
void Widget::displaySno()
{
    connect(ui->pushButton,QPushButton::clicked,[=](){
        if(ui->lineEdit->text().isEmpty())
        {
            QMessageBox::warning(this,"warn","Your input is empty");
        }
        else
        {
            dataToTable(QString("select * from student where sno like '%1'").arg(ui->lineEdit->text()));
        }
    });
}
//按班级显示
void Widget::displayClass()
{
    QSqlQuery q4;
    ui->comboBox->addItem("all class");
    q4.exec("select sclass from student group by sclass");
    while(q4.next())
    {
       ui->comboBox->addItem(q4.value(0).toString());
    }
    connect(ui->comboBox,QComboBox::currentTextChanged,[=](QString text){
        if(text=="all class")
        {
            dataToTable("select * from student");
        }
        else
        {
            dataToTable(QString("select * from student where sclass='%1'").arg(text));
        }

    });
}
//把数据显示到表格中
void Widget::dataToTable(QString sql)
{
    qDebug()<<this->sname;

    QSqlQuery q;   //query 查询

    q.exec(QString("select sno from student where sname='%1'").arg(this->sname));
    q.next();
    //QSqlQuery::exec()存我们要执行的语句,返回为1，说明sql语句执行成功，返回结果为0，说明sql执行失败
    QString curSno=q.value(0).toString();
    qDebug()<< curSno;
    if(q.exec(sql))
    {
        //tableWidget 就是加在ui中的表格
        //QSqlQuery::size()数据库中如果存的多少条数据，这个值就是多少
        ui->tableWidget->setRowCount(q.size());
        int i=0;
        //QSqlQuery::next()从数据的开头（指向第一条数据的上部）一直往下找，如果有数据则返回1，如果是一个空行，则返回0
        while(q.next())
        {
            QCheckBox *c=new QCheckBox("未签到");//QCheckBox表示一个控件， new 添加一个可以打勾的控件
            QString sno=q.value(0).toString();
            QSqlQuery q3;
            q3.exec(QString ("select signInTime from signIn where sno=%1 and date(signInTime)=curdate() order by signInTime desc").arg(sno));
            q3.next();

            if(sno!=curSno)
            {
                c->setDisabled(true);
            }



            if(q3.size())
            {
                c->setText("已签到");
                c->setDisabled(true);
                c->setChecked(true);
                ui->tableWidget->setItem(i,4,new QTableWidgetItem(q3.value(0).toString()));
            }
            //setItem 设置一个小项目
            //QSqlQuery::value() 这个函数返回的值是QVariant类型
            //QTableWidgetItem  这里放的是QString类型
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(q.value(0).toString()));//从数据库中读取到的第一列放到qt表格中
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(q.value(1).toString()));
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(q.value(2).toString()));
            ui->tableWidget->setCellWidget(i,3,c); //setCellWidget:设置一个格的内容 cell格

            //对每一个控件c都要进行设置，就需要在循环内写信号与槽
            connect(c,QCheckBox::clicked,[=](){
                //1.修改控件本身的状态
                c->setText("已签到");
                c->setDisabled(true);//失效的一个状态 bool类型
                //每个软件都会有一个类获取当前时间，mysql中就是now()
                //2.向表格中添加本人的签到时间
                ui->tableWidget->setItem(i,4,new QTableWidgetItem(QDateTime::currentDateTime().toString()));
                //3.向数据库中插入一条数据
                QSqlQuery q1;
                //通过QString 读取变量  将insert into signIn values(%1,now())变为QString的对象，QString中有一个函数arg()
                q1.exec(QString("insert into signIn values(%1,now())").arg(sno));
            });
            i++;
        }
    }
}
Widget::~Widget()
{
    delete ui;
}
