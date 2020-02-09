#include "enrol.h"
#include "ui_enrol.h"
#include <QSqlQuery>
#include <QDebug>

Enrol::Enrol(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Enrol)
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

Enrol::~Enrol()
{
    delete ui;
}

void Enrol::on_pushButton_clicked()
{
    QString ename=ui->lineEdit->text();
    QString enumber=ui->lineEdit_2->text();
    QString eclass=ui->lineEdit_3->text();
    QString epwd=ui->lineEdit_4->text();
    QSqlQuery q;
    q.exec(QString("insert into student values('%1','%2','%3','%4')").arg(enumber).arg(ename).arg(eclass).arg(epwd));
    this->close();
}
