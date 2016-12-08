/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tilitapahtumat
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton_peruuta;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tilitapahtumat)
    {
        if (Tilitapahtumat->objectName().isEmpty())
            Tilitapahtumat->setObjectName(QStringLiteral("Tilitapahtumat"));
        Tilitapahtumat->resize(1243, 766);
        centralwidget = new QWidget(Tilitapahtumat);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 30, 771, 701));
        pushButton_peruuta = new QPushButton(centralwidget);
        pushButton_peruuta->setObjectName(QStringLiteral("pushButton_peruuta"));
        pushButton_peruuta->setGeometry(QRect(880, 670, 101, 31));
        Tilitapahtumat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tilitapahtumat);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1243, 27));
        Tilitapahtumat->setMenuBar(menubar);
        statusbar = new QStatusBar(Tilitapahtumat);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Tilitapahtumat->setStatusBar(statusbar);

        retranslateUi(Tilitapahtumat);

        QMetaObject::connectSlotsByName(Tilitapahtumat);
    } // setupUi

    void retranslateUi(QMainWindow *Tilitapahtumat)
    {
        Tilitapahtumat->setWindowTitle(QApplication::translate("Tilitapahtumat", "MainWindow", 0));
        pushButton_peruuta->setText(QApplication::translate("Tilitapahtumat", "Peruuta", 0));
    } // retranslateUi

};

namespace Ui {
    class Tilitapahtumat: public Ui_Tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
