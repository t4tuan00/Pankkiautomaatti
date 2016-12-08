/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QPushButton *pushButton_20;
    QPushButton *pushButton_40;
    QPushButton *pushButton_60;
    QPushButton *pushButton_Peruuta;
    QPushButton *pushButton_80;
    QPushButton *pushButton_100;
    QPushButton *pushButton_120;
    QPushButton *pushButton_MuuSumma;

    void setupUi(QDialog *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QStringLiteral("Nosto"));
        Nosto->resize(1081, 749);
        pushButton_20 = new QPushButton(Nosto);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(0, 130, 121, 51));
        pushButton_40 = new QPushButton(Nosto);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        pushButton_40->setGeometry(QRect(0, 270, 121, 51));
        pushButton_60 = new QPushButton(Nosto);
        pushButton_60->setObjectName(QStringLiteral("pushButton_60"));
        pushButton_60->setGeometry(QRect(0, 390, 121, 61));
        pushButton_Peruuta = new QPushButton(Nosto);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));
        pushButton_Peruuta->setGeometry(QRect(0, 530, 121, 61));
        pushButton_80 = new QPushButton(Nosto);
        pushButton_80->setObjectName(QStringLiteral("pushButton_80"));
        pushButton_80->setGeometry(QRect(900, 140, 181, 51));
        pushButton_100 = new QPushButton(Nosto);
        pushButton_100->setObjectName(QStringLiteral("pushButton_100"));
        pushButton_100->setGeometry(QRect(910, 270, 171, 61));
        pushButton_120 = new QPushButton(Nosto);
        pushButton_120->setObjectName(QStringLiteral("pushButton_120"));
        pushButton_120->setGeometry(QRect(910, 390, 171, 61));
        pushButton_MuuSumma = new QPushButton(Nosto);
        pushButton_MuuSumma->setObjectName(QStringLiteral("pushButton_MuuSumma"));
        pushButton_MuuSumma->setGeometry(QRect(910, 540, 171, 61));

        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QDialog *Nosto)
    {
        Nosto->setWindowTitle(QApplication::translate("Nosto", "Dialog", 0));
        pushButton_20->setText(QApplication::translate("Nosto", "20", 0));
        pushButton_40->setText(QApplication::translate("Nosto", "40", 0));
        pushButton_60->setText(QApplication::translate("Nosto", "60", 0));
        pushButton_Peruuta->setText(QApplication::translate("Nosto", "peruuta", 0));
        pushButton_80->setText(QApplication::translate("Nosto", "80", 0));
        pushButton_100->setText(QApplication::translate("Nosto", "100", 0));
        pushButton_120->setText(QApplication::translate("Nosto", "120", 0));
        pushButton_MuuSumma->setText(QApplication::translate("Nosto", "Muu Summa", 0));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
