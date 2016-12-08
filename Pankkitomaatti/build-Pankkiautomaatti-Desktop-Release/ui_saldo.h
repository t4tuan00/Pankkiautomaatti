/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Saldo
{
public:
    QLabel *label;
    QPushButton *pushButton_Perruuta;
    QLabel *label_2;

    void setupUi(QDialog *Saldo)
    {
        if (Saldo->objectName().isEmpty())
            Saldo->setObjectName(QStringLiteral("Saldo"));
        Saldo->resize(634, 561);
        label = new QLabel(Saldo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 160, 301, 121));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        pushButton_Perruuta = new QPushButton(Saldo);
        pushButton_Perruuta->setObjectName(QStringLiteral("pushButton_Perruuta"));
        pushButton_Perruuta->setGeometry(QRect(480, 460, 101, 31));
        label_2 = new QLabel(Saldo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 70, 281, 61));
        QFont font1;
        font1.setPointSize(32);
        label_2->setFont(font1);

        retranslateUi(Saldo);

        QMetaObject::connectSlotsByName(Saldo);
    } // setupUi

    void retranslateUi(QDialog *Saldo)
    {
        Saldo->setWindowTitle(QApplication::translate("Saldo", "Dialog", 0));
        label->setText(QString());
        pushButton_Perruuta->setText(QApplication::translate("Saldo", "Peruuta", 0));
        label_2->setText(QApplication::translate("Saldo", "Tilin saldo", 0));
    } // retranslateUi

};

namespace Ui {
    class Saldo: public Ui_Saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
