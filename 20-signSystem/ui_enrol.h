/********************************************************************************
** Form generated from reading UI file 'enrol.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROL_H
#define UI_ENROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enrol
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QWidget *widget;

    void setupUi(QWidget *Enrol)
    {
        if (Enrol->objectName().isEmpty())
            Enrol->setObjectName(QStringLiteral("Enrol"));
        Enrol->resize(450, 516);
        layoutWidget = new QWidget(Enrol);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 104, 331, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout->addWidget(lineEdit_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));

        verticalLayout->addWidget(lineEdit_4);

        label_5 = new QLabel(Enrol);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 370, 72, 15));
        pushButton = new QPushButton(Enrol);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 397, 141, 41));
        widget = new QWidget(Enrol);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, -1, 451, 521));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/QQ\346\210\252\345\233\27620200209145237.png);"));
        widget->raise();
        layoutWidget->raise();
        label_5->raise();
        pushButton->raise();

        retranslateUi(Enrol);

        QMetaObject::connectSlotsByName(Enrol);
    } // setupUi

    void retranslateUi(QWidget *Enrol)
    {
        Enrol->setWindowTitle(QApplication::translate("Enrol", "Form", 0));
        label->setText(QApplication::translate("Enrol", "\345\247\223\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("Enrol", "\345\255\246\345\217\267\357\274\232", 0));
        label_3->setText(QApplication::translate("Enrol", "\347\217\255\347\272\247\357\274\232", 0));
        label_4->setText(QApplication::translate("Enrol", "\345\257\206\347\240\201\357\274\232", 0));
        label_5->setText(QString());
        pushButton->setText(QApplication::translate("Enrol", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Enrol: public Ui_Enrol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROL_H
