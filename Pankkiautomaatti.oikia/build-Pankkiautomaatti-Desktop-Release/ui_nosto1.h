/********************************************************************************
** Form generated from reading UI file 'nosto1.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO1_H
#define UI_NOSTO1_H

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

class Ui_Nosto1
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Nosto1)
    {
        if (Nosto1->objectName().isEmpty())
            Nosto1->setObjectName(QStringLiteral("Nosto1"));
        Nosto1->resize(800, 600);
        centralwidget = new QWidget(Nosto1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 10, 751, 521));
        Nosto1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Nosto1);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        Nosto1->setMenuBar(menubar);
        statusbar = new QStatusBar(Nosto1);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Nosto1->setStatusBar(statusbar);

        retranslateUi(Nosto1);

        QMetaObject::connectSlotsByName(Nosto1);
    } // setupUi

    void retranslateUi(QMainWindow *Nosto1)
    {
        Nosto1->setWindowTitle(QApplication::translate("Nosto1", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Nosto1: public Ui_Nosto1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO1_H
