/********************************************************************************
** Form generated from reading UI file 'digitalclock.ui'
**
** Created: Mon May 28 00:32:04 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALCLOCK_H
#define UI_DIGITALCLOCK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DigitalClock
{
public:
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;

    void setupUi(QWidget *DigitalClock)
    {
        if (DigitalClock->objectName().isEmpty())
            DigitalClock->setObjectName(QString::fromUtf8("DigitalClock"));
        DigitalClock->resize(400, 300);
        verticalLayout = new QVBoxLayout(DigitalClock);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lcdNumber = new QLCDNumber(DigitalClock);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);


        retranslateUi(DigitalClock);

        QMetaObject::connectSlotsByName(DigitalClock);
    } // setupUi

    void retranslateUi(QWidget *DigitalClock)
    {
        DigitalClock->setWindowTitle(QApplication::translate("DigitalClock", "Digital Clock", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DigitalClock: public Ui_DigitalClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALCLOCK_H
