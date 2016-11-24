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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Nosto
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_nosta40;
    QPushButton *pushButton_nosta20;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_nostasumma;
    QPushButton *pushButton_nosta140;
    QPushButton *pushButton_nosta240;
    QPushButton *pushButton_nosta90;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Nosto)
    {
        if (Nosto->objectName().isEmpty())
            Nosto->setObjectName(QStringLiteral("Nosto"));
        Nosto->resize(667, 447);
        centralwidget = new QWidget(Nosto);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1, 228, 91, 61));
        pushButton_nosta40 = new QPushButton(centralwidget);
        pushButton_nosta40->setObjectName(QStringLiteral("pushButton_nosta40"));
        pushButton_nosta40->setGeometry(QRect(1, 140, 91, 61));
        pushButton_nosta20 = new QPushButton(centralwidget);
        pushButton_nosta20->setObjectName(QStringLiteral("pushButton_nosta20"));
        pushButton_nosta20->setGeometry(QRect(1, 52, 91, 61));
        pushButton_Cancel = new QPushButton(centralwidget);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(1, 316, 91, 61));
        pushButton_nostasumma = new QPushButton(centralwidget);
        pushButton_nostasumma->setObjectName(QStringLiteral("pushButton_nostasumma"));
        pushButton_nostasumma->setGeometry(QRect(363, 319, 101, 61));
        pushButton_nosta140 = new QPushButton(centralwidget);
        pushButton_nosta140->setObjectName(QStringLiteral("pushButton_nosta140"));
        pushButton_nosta140->setGeometry(QRect(363, 143, 101, 61));
        pushButton_nosta240 = new QPushButton(centralwidget);
        pushButton_nosta240->setObjectName(QStringLiteral("pushButton_nosta240"));
        pushButton_nosta240->setGeometry(QRect(363, 231, 101, 61));
        pushButton_nosta90 = new QPushButton(centralwidget);
        pushButton_nosta90->setObjectName(QStringLiteral("pushButton_nosta90"));
        pushButton_nosta90->setGeometry(QRect(363, 55, 101, 61));
        Nosto->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Nosto);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 667, 27));
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
        pushButton->setText(QApplication::translate("Nosto", "60", 0));
        pushButton_nosta40->setText(QApplication::translate("Nosto", "40", 0));
        pushButton_nosta20->setText(QApplication::translate("Nosto", "20", 0));
        pushButton_Cancel->setText(QApplication::translate("Nosto", "Peruuta", 0));
        pushButton_nostasumma->setText(QApplication::translate("Nosto", "Sy\303\266t\303\244 summa", 0));
        pushButton_nosta140->setText(QApplication::translate("Nosto", "140", 0));
        pushButton_nosta240->setText(QApplication::translate("Nosto", "240", 0));
        pushButton_nosta90->setText(QApplication::translate("Nosto", "90", 0));
    } // retranslateUi

};

namespace Ui {
    class Nosto: public Ui_Nosto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
