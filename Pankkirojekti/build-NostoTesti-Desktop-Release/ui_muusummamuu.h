/********************************************************************************
** Form generated from reading UI file 'muusummamuu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUUSUMMAMUU_H
#define UI_MUUSUMMAMUU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MuuSummaMuu
{
public:
    QLabel *label;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_cancel;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_OK;

    void setupUi(QDialog *MuuSummaMuu)
    {
        if (MuuSummaMuu->objectName().isEmpty())
            MuuSummaMuu->setObjectName(QStringLiteral("MuuSummaMuu"));
        MuuSummaMuu->resize(400, 300);
        label = new QLabel(MuuSummaMuu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 50, 261, 21));
        splitter = new QSplitter(MuuSummaMuu);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(60, 140, 261, 144));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        verticalLayout->addWidget(pushButton_1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_cancel = new QPushButton(widget);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        verticalLayout->addWidget(pushButton_cancel);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(widget1);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_0 = new QPushButton(widget1);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));

        verticalLayout_2->addWidget(pushButton_0);

        splitter->addWidget(widget1);
        widget2 = new QWidget(splitter);
        widget2->setObjectName(QStringLiteral("widget2"));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(widget2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(widget2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_3->addWidget(pushButton_6);

        pushButton_9 = new QPushButton(widget2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_3->addWidget(pushButton_9);

        pushButton_OK = new QPushButton(widget2);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));

        verticalLayout_3->addWidget(pushButton_OK);

        splitter->addWidget(widget2);

        retranslateUi(MuuSummaMuu);

        QMetaObject::connectSlotsByName(MuuSummaMuu);
    } // setupUi

    void retranslateUi(QDialog *MuuSummaMuu)
    {
        MuuSummaMuu->setWindowTitle(QApplication::translate("MuuSummaMuu", "Dialog", 0));
        label->setText(QApplication::translate("MuuSummaMuu", "TextLabel", 0));
        pushButton_1->setText(QApplication::translate("MuuSummaMuu", "1", 0));
        pushButton_4->setText(QApplication::translate("MuuSummaMuu", "4", 0));
        pushButton_7->setText(QApplication::translate("MuuSummaMuu", "7", 0));
        pushButton_cancel->setText(QApplication::translate("MuuSummaMuu", "CANCEL", 0));
        pushButton_2->setText(QApplication::translate("MuuSummaMuu", "2", 0));
        pushButton_5->setText(QApplication::translate("MuuSummaMuu", "5", 0));
        pushButton_8->setText(QApplication::translate("MuuSummaMuu", "8", 0));
        pushButton_0->setText(QApplication::translate("MuuSummaMuu", "0", 0));
        pushButton_3->setText(QApplication::translate("MuuSummaMuu", "3", 0));
        pushButton_6->setText(QApplication::translate("MuuSummaMuu", "6", 0));
        pushButton_9->setText(QApplication::translate("MuuSummaMuu", "9", 0));
        pushButton_OK->setText(QApplication::translate("MuuSummaMuu", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class MuuSummaMuu: public Ui_MuuSummaMuu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUUSUMMAMUU_H
