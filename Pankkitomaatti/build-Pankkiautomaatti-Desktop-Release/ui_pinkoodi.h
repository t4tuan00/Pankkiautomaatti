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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Pinkoodi
{
public:
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Plus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Miinus;
    QLabel *label;
    QPushButton *pushButton_Peruuta;
    QPushButton *pushButton_Pyyhi;
    QPushButton *pushButton_Ok;

    void setupUi(QDialog *Pinkoodi)
    {
        if (Pinkoodi->objectName().isEmpty())
            Pinkoodi->setObjectName(QStringLiteral("Pinkoodi"));
        Pinkoodi->resize(990, 757);
        pushButton_1 = new QPushButton(Pinkoodi);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(150, 290, 101, 31));
        pushButton_2 = new QPushButton(Pinkoodi);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 290, 101, 31));
        pushButton_3 = new QPushButton(Pinkoodi);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 290, 101, 31));
        pushButton_4 = new QPushButton(Pinkoodi);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 330, 101, 31));
        pushButton_5 = new QPushButton(Pinkoodi);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(260, 330, 101, 31));
        pushButton_6 = new QPushButton(Pinkoodi);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 330, 101, 31));
        pushButton_7 = new QPushButton(Pinkoodi);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(150, 370, 101, 31));
        pushButton_8 = new QPushButton(Pinkoodi);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(260, 370, 101, 31));
        pushButton_9 = new QPushButton(Pinkoodi);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(370, 370, 101, 31));
        pushButton_Plus = new QPushButton(Pinkoodi);
        pushButton_Plus->setObjectName(QStringLiteral("pushButton_Plus"));
        pushButton_Plus->setGeometry(QRect(150, 410, 101, 31));
        pushButton_0 = new QPushButton(Pinkoodi);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(260, 410, 101, 31));
        pushButton_Miinus = new QPushButton(Pinkoodi);
        pushButton_Miinus->setObjectName(QStringLiteral("pushButton_Miinus"));
        pushButton_Miinus->setGeometry(QRect(370, 410, 101, 31));
        label = new QLabel(Pinkoodi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 201, 301, 61));
        pushButton_Peruuta = new QPushButton(Pinkoodi);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));
        pushButton_Peruuta->setGeometry(QRect(520, 300, 101, 31));
        pushButton_Pyyhi = new QPushButton(Pinkoodi);
        pushButton_Pyyhi->setObjectName(QStringLiteral("pushButton_Pyyhi"));
        pushButton_Pyyhi->setGeometry(QRect(520, 340, 101, 31));
        pushButton_Ok = new QPushButton(Pinkoodi);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setGeometry(QRect(520, 390, 101, 31));

        retranslateUi(Pinkoodi);

        QMetaObject::connectSlotsByName(Pinkoodi);
    } // setupUi

    void retranslateUi(QDialog *Pinkoodi)
    {
        Pinkoodi->setWindowTitle(QApplication::translate("Pinkoodi", "Dialog", 0));
        pushButton_1->setText(QApplication::translate("Pinkoodi", "1", 0));
        pushButton_2->setText(QApplication::translate("Pinkoodi", "2", 0));
        pushButton_3->setText(QApplication::translate("Pinkoodi", "3", 0));
        pushButton_4->setText(QApplication::translate("Pinkoodi", "4", 0));
        pushButton_5->setText(QApplication::translate("Pinkoodi", "5", 0));
        pushButton_6->setText(QApplication::translate("Pinkoodi", "6", 0));
        pushButton_7->setText(QApplication::translate("Pinkoodi", "7", 0));
        pushButton_8->setText(QApplication::translate("Pinkoodi", "8", 0));
        pushButton_9->setText(QApplication::translate("Pinkoodi", "9", 0));
        pushButton_Plus->setText(QApplication::translate("Pinkoodi", "+", 0));
        pushButton_0->setText(QApplication::translate("Pinkoodi", "0", 0));
        pushButton_Miinus->setText(QApplication::translate("Pinkoodi", "-", 0));
        label->setText(QApplication::translate("Pinkoodi", "TextLabel", 0));
        pushButton_Peruuta->setText(QApplication::translate("Pinkoodi", "Peruuta", 0));
        pushButton_Pyyhi->setText(QApplication::translate("Pinkoodi", "<-", 0));
        pushButton_Ok->setText(QApplication::translate("Pinkoodi", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class Pinkoodi: public Ui_Pinkoodi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODI_H
