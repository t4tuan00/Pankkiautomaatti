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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QStringLiteral("Nosto"));
        Nosto->resize(1297, 600);
        centralwidget = new QWidget(Nosto);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 0, 1251, 521));
        Nosto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Nosto);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1297, 27));
        Nosto->setMenuBar(menubar);
        statusbar = new QStatusBar(Nosto);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Nosto->setStatusBar(statusbar);

        retranslateUi(Nosto);

        QMetaObject::connectSlotsByName(Nosto);
    } // setupUi

    void retranslateUi(QMainWindow *Nosto)
    {
        Nosto->setWindowTitle(QApplication::translate("Nosto", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
