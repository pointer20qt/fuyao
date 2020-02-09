#include "login.h"
#include "ui_login.h"
#include <QSqlQuery>
#include <QMessageBox>
#include "widget.h"
#include <QDebug>
#include "enrol.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    //qt使用QSqlDatabase  表示数据库的连接
    //qt数据库教程  数据库连接的名称db  数据库都是有驱动的driver
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    //数据库连接信息
    db.setDatabaseName("first");
    db.setUserName("root");
    db.setPassword("123456");
    //将数据打开
    if(db.open())
    {
        qDebug()<<"Success";
    }
    else
    {
        qDebug()<<"Failure";
    }
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
    QString sname=ui->lineEdit->text();
    QString pwd=ui->lineEdit_2->text();

    QSqlQuery q;
    q.exec(QString("select *from student where sname='%1'").arg(sname));
    if(q.size()>0)
    {
        q.exec(QString("select *from student where sname='%1' and pwd='%2'").arg(sname).arg(pwd));
        if(q.size()>0)
        {
            Widget *w =new Widget(NULL,sname);
            w->sname=sname;
            w->show();
            this->close();
            w->sname=sname;
        }
        else
        {
            QMessageBox::warning(this,"warn","密码输入错误");
        }
    }
    else
    {
        QMessageBox::warning(this,"warn","用户不存在");
    }
}



void Login::on_pushButton_clicked()
{

        Enrol *e=new Enrol();
        e->show();
        this->close();


}
