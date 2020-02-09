#include "personalinformation.h"
#include "ui_personalinformation.h"
#include <QSqlQuery>
#include <QTextCharFormat>

PersonalInformation::PersonalInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonalInformation)
{
    ui->setupUi(this);
}

PersonalInformation::~PersonalInformation()
{
    delete ui;
}
void PersonalInformation::init(QString sno,QString sname)
{
    ui->label->setText("学号: "+sno);
    ui->label_2->setText("姓名: "+sname);
    QSqlQuery q;
    q.exec(QString("select * from signIn where sno=%1 and date_format(signInTime,'%Y-%m')=date_format(curdate(),'%Y-%m')").arg(sno));
    ui->label_5->setText("签到次数： "+QString::number(q.size()));
    QTextCharFormat f;
    f.setForeground(Qt::black);
    f.setBackground(Qt::yellow);

    while(q.next())
    {
        ui->calendarWidget->setDateTextFormat(q.value(1).toDate(),f);
    }

}
