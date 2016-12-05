/********************************************************************************
** Form generated from reading UI file 'pinkoodi.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINKOODI_H
#define UI_PINKOODI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pinKoodi
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
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
    QPushButton *pushButton_minus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_plus;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonPinPeruuta;
    QPushButton *pushButtonPinOK;
    QPushButton *pushButtonPinPyyhi;

    void setupUi(QDialog *pinKoodi)
    {
        if (pinKoodi->objectName().isEmpty())
            pinKoodi->setObjectName(QStringLiteral("pinKoodi"));
        pinKoodi->resize(884, 671);
        label = new QLabel(pinKoodi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 120, 211, 61));
        widget = new QWidget(pinKoodi);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(170, 210, 366, 154));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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
        pushButton_minus = new QPushButton(widget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));

        horizontalLayout_4->addWidget(pushButton_minus);

        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));

        horizontalLayout_4->addWidget(pushButton_0);

        pushButton_plus = new QPushButton(widget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));

        horizontalLayout_4->addWidget(pushButton_plus);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButtonPinPeruuta = new QPushButton(widget);
        pushButtonPinPeruuta->setObjectName(QStringLiteral("pushButtonPinPeruuta"));

        verticalLayout_2->addWidget(pushButtonPinPeruuta);

        pushButtonPinOK = new QPushButton(widget);
        pushButtonPinOK->setObjectName(QStringLiteral("pushButtonPinOK"));

        verticalLayout_2->addWidget(pushButtonPinOK);

        pushButtonPinPyyhi = new QPushButton(widget);
        pushButtonPinPyyhi->setObjectName(QStringLiteral("pushButtonPinPyyhi"));

        verticalLayout_2->addWidget(pushButtonPinPyyhi);


        horizontalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(pinKoodi);

        QMetaObject::connectSlotsByName(pinKoodi);
    } // setupUi

    void retranslateUi(QDialog *pinKoodi)
    {
        pinKoodi->setWindowTitle(QApplication::translate("pinKoodi", "Dialog", 0));
        label->setText(QApplication::translate("pinKoodi", "Sy\303\266t\303\244 PIN-koodi", 0));
        pushButton_1->setText(QApplication::translate("pinKoodi", "1", 0));
        pushButton_2->setText(QApplication::translate("pinKoodi", "2", 0));
        pushButton_3->setText(QApplication::translate("pinKoodi", "3", 0));
        pushButton_4->setText(QApplication::translate("pinKoodi", "4", 0));
        pushButton_5->setText(QApplication::translate("pinKoodi", "5", 0));
        pushButton_6->setText(QApplication::translate("pinKoodi", "6", 0));
        pushButton_7->setText(QApplication::translate("pinKoodi", "7", 0));
        pushButton_8->setText(QApplication::translate("pinKoodi", "8", 0));
        pushButton_9->setText(QApplication::translate("pinKoodi", "9", 0));
        pushButton_minus->setText(QApplication::translate("pinKoodi", "-", 0));
        pushButton_0->setText(QApplication::translate("pinKoodi", "0", 0));
        pushButton_plus->setText(QApplication::translate("pinKoodi", "+", 0));
        pushButtonPinPeruuta->setText(QApplication::translate("pinKoodi", "Peruuta", 0));
        pushButtonPinOK->setText(QApplication::translate("pinKoodi", "OK", 0));
        pushButtonPinPyyhi->setText(QApplication::translate("pinKoodi", "<-", 0));
    } // retranslateUi

};

namespace Ui {
    class pinKoodi: public Ui_pinKoodi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODI_H
