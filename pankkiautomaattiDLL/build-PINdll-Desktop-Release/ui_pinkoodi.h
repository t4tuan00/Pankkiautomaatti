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

class Ui_Pinkoodi
{
public:
    QLabel *label;
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
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Peruuta;
    QPushButton *pushButton_Pyyhi;
    QPushButton *pushButton_Ok;

    void setupUi(QDialog *Pinkoodi)
    {
        if (Pinkoodi->objectName().isEmpty())
            Pinkoodi->setObjectName(QStringLiteral("Pinkoodi"));
        Pinkoodi->resize(724, 536);
        label = new QLabel(Pinkoodi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 110, 361, 71));
        widget = new QWidget(Pinkoodi);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 200, 361, 231));
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

        widget1 = new QWidget(Pinkoodi);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(470, 250, 121, 181));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Peruuta = new QPushButton(widget1);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));

        verticalLayout_2->addWidget(pushButton_Peruuta);

        pushButton_Pyyhi = new QPushButton(widget1);
        pushButton_Pyyhi->setObjectName(QStringLiteral("pushButton_Pyyhi"));

        verticalLayout_2->addWidget(pushButton_Pyyhi);

        pushButton_Ok = new QPushButton(widget1);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));

        verticalLayout_2->addWidget(pushButton_Ok);


        retranslateUi(Pinkoodi);

        QMetaObject::connectSlotsByName(Pinkoodi);
    } // setupUi

    void retranslateUi(QDialog *Pinkoodi)
    {
        Pinkoodi->setWindowTitle(QApplication::translate("Pinkoodi", "Dialog", 0));
        label->setText(QApplication::translate("Pinkoodi", "TextLabel", 0));
        pushButton_1->setText(QApplication::translate("Pinkoodi", "1", 0));
        pushButton_2->setText(QApplication::translate("Pinkoodi", "2", 0));
        pushButton_3->setText(QApplication::translate("Pinkoodi", "3", 0));
        pushButton_4->setText(QApplication::translate("Pinkoodi", "4", 0));
        pushButton_5->setText(QApplication::translate("Pinkoodi", "5", 0));
        pushButton_6->setText(QApplication::translate("Pinkoodi", "6", 0));
        pushButton_7->setText(QApplication::translate("Pinkoodi", "7", 0));
        pushButton_8->setText(QApplication::translate("Pinkoodi", "8", 0));
        pushButton_9->setText(QApplication::translate("Pinkoodi", "9", 0));
        pushButton_plus->setText(QApplication::translate("Pinkoodi", "+", 0));
        pushButton_0->setText(QApplication::translate("Pinkoodi", "0", 0));
        pushButton_miinus->setText(QApplication::translate("Pinkoodi", "-", 0));
        pushButton_Peruuta->setText(QApplication::translate("Pinkoodi", "Peruuta", 0));
        pushButton_Pyyhi->setText(QApplication::translate("Pinkoodi", "<-", 0));
        pushButton_Ok->setText(QApplication::translate("Pinkoodi", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class Pinkoodi: public Ui_Pinkoodi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODI_H
