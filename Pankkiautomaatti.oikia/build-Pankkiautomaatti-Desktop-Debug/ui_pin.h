/********************************************************************************
** Form generated from reading UI file 'pin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIN_H
#define UI_PIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pin
{
public:
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonCorrect;
    QPushButton *pushButtonOk;
    QLCDNumber *lcdNumber;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_miinus;

    void setupUi(QDialog *Pin)
    {
        if (Pin->objectName().isEmpty())
            Pin->setObjectName(QStringLiteral("Pin"));
        Pin->resize(545, 329);
        pushButtonCancel = new QPushButton(Pin);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(420, 140, 101, 31));
        pushButtonCorrect = new QPushButton(Pin);
        pushButtonCorrect->setObjectName(QStringLiteral("pushButtonCorrect"));
        pushButtonCorrect->setGeometry(QRect(420, 180, 101, 31));
        pushButtonOk = new QPushButton(Pin);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(420, 220, 101, 31));
        lcdNumber = new QLCDNumber(Pin);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(30, 40, 371, 71));
        widget = new QWidget(Pin);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 130, 371, 181));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        horizontalLayout->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_3->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_plus = new QPushButton(widget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));

        horizontalLayout_4->addWidget(pushButton_plus);

        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));

        horizontalLayout_4->addWidget(pushButton_0);

        pushButton_miinus = new QPushButton(widget);
        pushButton_miinus->setObjectName(QStringLiteral("pushButton_miinus"));

        horizontalLayout_4->addWidget(pushButton_miinus);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Pin);

        QMetaObject::connectSlotsByName(Pin);
    } // setupUi

    void retranslateUi(QDialog *Pin)
    {
        Pin->setWindowTitle(QApplication::translate("Pin", "Dialog", 0));
        pushButtonCancel->setText(QApplication::translate("Pin", "Cancel", 0));
        pushButtonCorrect->setText(QApplication::translate("Pin", "<-", 0));
        pushButtonOk->setText(QApplication::translate("Pin", "OK", 0));
        pushButton_1->setText(QApplication::translate("Pin", "1", 0));
        pushButton_2->setText(QApplication::translate("Pin", "2", 0));
        pushButton_3->setText(QApplication::translate("Pin", "3", 0));
        pushButton_4->setText(QApplication::translate("Pin", "4", 0));
        pushButton_5->setText(QApplication::translate("Pin", "5", 0));
        pushButton_6->setText(QApplication::translate("Pin", "6", 0));
        pushButton_7->setText(QApplication::translate("Pin", "7", 0));
        pushButton_8->setText(QApplication::translate("Pin", "8", 0));
        pushButton_9->setText(QApplication::translate("Pin", "9", 0));
        pushButton_plus->setText(QApplication::translate("Pin", "+", 0));
        pushButton_0->setText(QApplication::translate("Pin", "0", 0));
        pushButton_miinus->setText(QApplication::translate("Pin", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class Pin: public Ui_Pin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIN_H
