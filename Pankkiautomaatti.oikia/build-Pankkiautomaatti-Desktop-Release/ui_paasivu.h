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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paasivu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonSaldo;
    QPushButton *pushButtonNosto;
    QPushButton *pushButtonTilitapahtumat;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *Paasivu)
    {
        if (Paasivu->objectName().isEmpty())
            Paasivu->setObjectName(QStringLiteral("Paasivu"));
        Paasivu->resize(400, 300);
        widget = new QWidget(Paasivu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(260, 20, 125, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonSaldo = new QPushButton(widget);
        pushButtonSaldo->setObjectName(QStringLiteral("pushButtonSaldo"));

        verticalLayout->addWidget(pushButtonSaldo);

        pushButtonNosto = new QPushButton(widget);
        pushButtonNosto->setObjectName(QStringLiteral("pushButtonNosto"));

        verticalLayout->addWidget(pushButtonNosto);

        pushButtonTilitapahtumat = new QPushButton(widget);
        pushButtonTilitapahtumat->setObjectName(QStringLiteral("pushButtonTilitapahtumat"));

        verticalLayout->addWidget(pushButtonTilitapahtumat);

        pushButtonCancel = new QPushButton(widget);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        verticalLayout->addWidget(pushButtonCancel);


        retranslateUi(Paasivu);

        QMetaObject::connectSlotsByName(Paasivu);
    } // setupUi

    void retranslateUi(QDialog *Paasivu)
    {
        Paasivu->setWindowTitle(QApplication::translate("Paasivu", "Dialog", 0));
        pushButtonSaldo->setText(QApplication::translate("Paasivu", "Saldo", 0));
        pushButtonNosto->setText(QApplication::translate("Paasivu", "Nosto", 0));
        pushButtonTilitapahtumat->setText(QApplication::translate("Paasivu", "Tilitapahtumat", 0));
        pushButtonCancel->setText(QApplication::translate("Paasivu", "Peruuta", 0));
    } // retranslateUi

};

namespace Ui {
    class Paasivu: public Ui_Paasivu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAASIVU_H
