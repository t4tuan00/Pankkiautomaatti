/********************************************************************************
** Form generated from reading UI file 'taulukko.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAULUKKO_H
#define UI_TAULUKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Taulukko
{
public:
    QTableView *tableView;
    QPushButton *pushButton_LOAD;

    void setupUi(QDialog *Taulukko)
    {
        if (Taulukko->objectName().isEmpty())
            Taulukko->setObjectName(QStringLiteral("Taulukko"));
        Taulukko->resize(400, 300);
        tableView = new QTableView(Taulukko);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 30, 331, 231));
        pushButton_LOAD = new QPushButton(Taulukko);
        pushButton_LOAD->setObjectName(QStringLiteral("pushButton_LOAD"));
        pushButton_LOAD->setGeometry(QRect(130, 260, 101, 31));

        retranslateUi(Taulukko);

        QMetaObject::connectSlotsByName(Taulukko);
    } // setupUi

    void retranslateUi(QDialog *Taulukko)
    {
        Taulukko->setWindowTitle(QApplication::translate("Taulukko", "Dialog", 0));
        pushButton_LOAD->setText(QApplication::translate("Taulukko", "HAE", 0));
    } // retranslateUi

};

namespace Ui {
    class Taulukko: public Ui_Taulukko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAULUKKO_H
