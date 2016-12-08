/********************************************************************************
** Form generated from reading UI file 'paasivu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAASIVU_H
#define UI_PAASIVU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Paasivu
{
public:
    QPushButton *pushButton_Saldo;
    QPushButton *pushButton_Tilitapahtumat;
    QPushButton *pushButton_Nosto;
    QPushButton *pushButton_Peruuta;

    void setupUi(QDialog *Paasivu)
    {
        if (Paasivu->objectName().isEmpty())
            Paasivu->setObjectName(QStringLiteral("Paasivu"));
        Paasivu->resize(823, 712);
        pushButton_Saldo = new QPushButton(Paasivu);
        pushButton_Saldo->setObjectName(QStringLiteral("pushButton_Saldo"));
        pushButton_Saldo->setGeometry(QRect(580, 160, 121, 31));
        pushButton_Tilitapahtumat = new QPushButton(Paasivu);
        pushButton_Tilitapahtumat->setObjectName(QStringLiteral("pushButton_Tilitapahtumat"));
        pushButton_Tilitapahtumat->setGeometry(QRect(580, 200, 121, 31));
        pushButton_Nosto = new QPushButton(Paasivu);
        pushButton_Nosto->setObjectName(QStringLiteral("pushButton_Nosto"));
        pushButton_Nosto->setGeometry(QRect(580, 250, 121, 31));
        pushButton_Peruuta = new QPushButton(Paasivu);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));
        pushButton_Peruuta->setGeometry(QRect(580, 300, 121, 31));

        retranslateUi(Paasivu);

        QMetaObject::connectSlotsByName(Paasivu);
    } // setupUi

    void retranslateUi(QDialog *Paasivu)
    {
        Paasivu->setWindowTitle(QApplication::translate("Paasivu", "Dialog", 0));
        pushButton_Saldo->setText(QApplication::translate("Paasivu", "Saldo", 0));
        pushButton_Tilitapahtumat->setText(QApplication::translate("Paasivu", "Tilitapahtumat", 0));
        pushButton_Nosto->setText(QApplication::translate("Paasivu", "Nosto", 0));
        pushButton_Peruuta->setText(QApplication::translate("Paasivu", "Peruuta", 0));
    } // retranslateUi

};

namespace Ui {
    class Paasivu: public Ui_Paasivu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAASIVU_H
