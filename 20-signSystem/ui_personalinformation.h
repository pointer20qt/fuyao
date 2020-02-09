/********************************************************************************
** Form generated from reading UI file 'personalinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALINFORMATION_H
#define UI_PERSONALINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonalInformation
{
public:
    QLabel *label;
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QProgressBar *progressBar;

    void setupUi(QWidget *PersonalInformation)
    {
        if (PersonalInformation->objectName().isEmpty())
            PersonalInformation->setObjectName(QStringLiteral("PersonalInformation"));
        PersonalInformation->resize(747, 528);
        label = new QLabel(PersonalInformation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 161, 31));
        label_2 = new QLabel(PersonalInformation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 70, 141, 31));
        calendarWidget = new QCalendarWidget(PersonalInformation);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(40, 130, 491, 261));
        label_3 = new QLabel(PersonalInformation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(550, 24, 121, 71));
        layoutWidget = new QWidget(PersonalInformation);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 440, 601, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);


        retranslateUi(PersonalInformation);

        QMetaObject::connectSlotsByName(PersonalInformation);
    } // setupUi

    void retranslateUi(QWidget *PersonalInformation)
    {
        PersonalInformation->setWindowTitle(QApplication::translate("PersonalInformation", "Form", 0));
        label->setText(QApplication::translate("PersonalInformation", "TextLabel", 0));
        label_2->setText(QApplication::translate("PersonalInformation", "TextLabel", 0));
        label_3->setText(QApplication::translate("PersonalInformation", "TextLabel", 0));
        label_5->setText(QApplication::translate("PersonalInformation", "TextLabel", 0));
        label_4->setText(QApplication::translate("PersonalInformation", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class PersonalInformation: public Ui_PersonalInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALINFORMATION_H
