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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainwindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonConnect;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Mainwindow)
    {
        if (Mainwindow->objectName().isEmpty())
            Mainwindow->setObjectName(QStringLiteral("Mainwindow"));
        Mainwindow->resize(415, 357);
        centralWidget = new QWidget(Mainwindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(50, 10, 301, 161));
        pushButtonCancel = new QPushButton(centralWidget);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(250, 190, 101, 31));
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(50, 190, 101, 31));
        Mainwindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Mainwindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 415, 27));
        Mainwindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Mainwindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Mainwindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Mainwindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Mainwindow->setStatusBar(statusBar);
        toolBar = new QToolBar(Mainwindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Mainwindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(Mainwindow);

        QMetaObject::connectSlotsByName(Mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Mainwindow)
    {
        Mainwindow->setWindowTitle(QApplication::translate("Mainwindow", "Mainwindow", 0));
        textEdit->setHtml(QApplication::translate("Mainwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:12pt; font-weight:200; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">Sy\303\266t\303\244 kortti</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">automaattiin.</span></p></body></html>", 0));
        pushButtonCancel->setText(QApplication::translate("Mainwindow", "Peruuta", 0));
        pushButtonConnect->setText(QApplication::translate("Mainwindow", "Connect", 0));
        toolBar->setWindowTitle(QApplication::translate("Mainwindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Mainwindow: public Ui_Mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
