/********************************************************************************
** Form generated from reading UI file 'nostasumma.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTASUMMA_H
#define UI_NOSTASUMMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NostaSumma
{
public:
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Peruuta;
    QPushButton *pushButton_Pyyhi;
    QPushButton *pushButton_Ok;
    QLabel *label;

    void setupUi(QDialog *NostaSumma)
    {
        if (NostaSumma->objectName().isEmpty())
            NostaSumma->setObjectName(QStringLiteral("NostaSumma"));
        NostaSumma->resize(718, 724);
        pushButton_1 = new QPushButton(NostaSumma);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(110, 220, 101, 51));
        pushButton_2 = new QPushButton(NostaSumma);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 220, 101, 51));
        pushButton_3 = new QPushButton(NostaSumma);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 220, 101, 51));
        pushButton_4 = new QPushButton(NostaSumma);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(110, 280, 101, 51));
        pushButton_5 = new QPushButton(NostaSumma);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 280, 101, 51));
        pushButton_6 = new QPushButton(NostaSumma);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(330, 280, 101, 51));
        pushButton_7 = new QPushButton(NostaSumma);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(110, 340, 101, 51));
        pushButton_8 = new QPushButton(NostaSumma);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(220, 340, 101, 51));
        pushButton_9 = new QPushButton(NostaSumma);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(330, 340, 101, 51));
        pushButton_0 = new QPushButton(NostaSumma);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(220, 400, 101, 51));
        pushButton_Peruuta = new QPushButton(NostaSumma);
        pushButton_Peruuta->setObjectName(QStringLiteral("pushButton_Peruuta"));
        pushButton_Peruuta->setGeometry(QRect(520, 220, 101, 51));
        pushButton_Pyyhi = new QPushButton(NostaSumma);
        pushButton_Pyyhi->setObjectName(QStringLiteral("pushButton_Pyyhi"));
        pushButton_Pyyhi->setGeometry(QRect(520, 280, 101, 51));
        pushButton_Ok = new QPushButton(NostaSumma);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setGeometry(QRect(520, 340, 101, 51));
        label = new QLabel(NostaSumma);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 120, 331, 61));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);

        retranslateUi(NostaSumma);

        QMetaObject::connectSlotsByName(NostaSumma);
    } // setupUi

    void retranslateUi(QDialog *NostaSumma)
    {
        NostaSumma->setWindowTitle(QApplication::translate("NostaSumma", "Dialog", 0));
        pushButton_1->setText(QApplication::translate("NostaSumma", "1", 0));
        pushButton_2->setText(QApplication::translate("NostaSumma", "2", 0));
        pushButton_3->setText(QApplication::translate("NostaSumma", "3", 0));
        pushButton_4->setText(QApplication::translate("NostaSumma", "4", 0));
        pushButton_5->setText(QApplication::translate("NostaSumma", "5", 0));
        pushButton_6->setText(QApplication::translate("NostaSumma", "6", 0));
        pushButton_7->setText(QApplication::translate("NostaSumma", "7", 0));
        pushButton_8->setText(QApplication::translate("NostaSumma", "8", 0));
        pushButton_9->setText(QApplication::translate("NostaSumma", "9", 0));
        pushButton_0->setText(QApplication::translate("NostaSumma", "0", 0));
        pushButton_Peruuta->setText(QApplication::translate("NostaSumma", "Peruuta", 0));
        pushButton_Pyyhi->setText(QApplication::translate("NostaSumma", "<-", 0));
        pushButton_Ok->setText(QApplication::translate("NostaSumma", "OK", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NostaSumma: public Ui_NostaSumma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTASUMMA_H
