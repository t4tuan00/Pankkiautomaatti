/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton20;
    QPushButton *pushButton_40;
    QPushButton *pushButton_60;
    QPushButton *pushButtonCANCEL;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_80;
    QPushButton *pushButton_100;
    QPushButton *pushButton_120;
    QPushButton *pushButton_MUU;
    QPushButton *pushButtonNAUTA;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, -20, 111, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton20 = new QPushButton(layoutWidget);
        pushButton20->setObjectName(QStringLiteral("pushButton20"));

        verticalLayout->addWidget(pushButton20);

        pushButton_40 = new QPushButton(layoutWidget);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));

        verticalLayout->addWidget(pushButton_40);

        pushButton_60 = new QPushButton(layoutWidget);
        pushButton_60->setObjectName(QStringLiteral("pushButton_60"));

        verticalLayout->addWidget(pushButton_60);

        pushButtonCANCEL = new QPushButton(layoutWidget);
        pushButtonCANCEL->setObjectName(QStringLiteral("pushButtonCANCEL"));

        verticalLayout->addWidget(pushButtonCANCEL);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(290, -20, 110, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_80 = new QPushButton(layoutWidget1);
        pushButton_80->setObjectName(QStringLiteral("pushButton_80"));

        verticalLayout_2->addWidget(pushButton_80);

        pushButton_100 = new QPushButton(layoutWidget1);
        pushButton_100->setObjectName(QStringLiteral("pushButton_100"));

        verticalLayout_2->addWidget(pushButton_100);

        pushButton_120 = new QPushButton(layoutWidget1);
        pushButton_120->setObjectName(QStringLiteral("pushButton_120"));

        verticalLayout_2->addWidget(pushButton_120);

        pushButton_MUU = new QPushButton(layoutWidget1);
        pushButton_MUU->setObjectName(QStringLiteral("pushButton_MUU"));

        verticalLayout_2->addWidget(pushButton_MUU);

        pushButtonNAUTA = new QPushButton(centralWidget);
        pushButtonNAUTA->setObjectName(QStringLiteral("pushButtonNAUTA"));
        pushButtonNAUTA->setGeometry(QRect(150, 200, 101, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton20->setText(QApplication::translate("MainWindow", "20", 0));
        pushButton_40->setText(QApplication::translate("MainWindow", "40", 0));
        pushButton_60->setText(QApplication::translate("MainWindow", "60", 0));
        pushButtonCANCEL->setText(QApplication::translate("MainWindow", "CANCEL", 0));
        pushButton_80->setText(QApplication::translate("MainWindow", "80", 0));
        pushButton_100->setText(QApplication::translate("MainWindow", "100", 0));
        pushButton_120->setText(QApplication::translate("MainWindow", "120", 0));
        pushButton_MUU->setText(QApplication::translate("MainWindow", "muu summa", 0));
        pushButtonNAUTA->setText(QApplication::translate("MainWindow", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
