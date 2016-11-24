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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paasivu
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonSaldo;
    QPushButton *pushButtonNosto;
    QPushButton *pushButtonTilitapahtumat;
    QPushButton *pushButtonCancel;
    QTableView *tableView;

    void setupUi(QDialog *Paasivu)
    {
        if (Paasivu->objectName().isEmpty())
            Paasivu->setObjectName(QStringLiteral("Paasivu"));
        Paasivu->resize(1227, 621);
        layoutWidget = new QWidget(Paasivu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1080, 160, 125, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonSaldo = new QPushButton(layoutWidget);
        pushButtonSaldo->setObjectName(QStringLiteral("pushButtonSaldo"));

        verticalLayout->addWidget(pushButtonSaldo);

        pushButtonNosto = new QPushButton(layoutWidget);
        pushButtonNosto->setObjectName(QStringLiteral("pushButtonNosto"));

        verticalLayout->addWidget(pushButtonNosto);

        pushButtonTilitapahtumat = new QPushButton(layoutWidget);
        pushButtonTilitapahtumat->setObjectName(QStringLiteral("pushButtonTilitapahtumat"));

        verticalLayout->addWidget(pushButtonTilitapahtumat);

        pushButtonCancel = new QPushButton(layoutWidget);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        verticalLayout->addWidget(pushButtonCancel);

        tableView = new QTableView(Paasivu);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 40, 1031, 571));

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
