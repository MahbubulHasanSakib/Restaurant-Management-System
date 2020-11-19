/********************************************************************************
** Form generated from reading UI file 'caldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALDIALOG_H
#define UI_CALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CalDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_cost;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CalDialog)
    {
        if (CalDialog->objectName().isEmpty())
            CalDialog->setObjectName(QString::fromUtf8("CalDialog"));
        CalDialog->resize(918, 733);
        QFont font;
        font.setPointSize(12);
        CalDialog->setFont(font);
        CalDialog->setStyleSheet(QString::fromUtf8("QDialog{background-image:url(\"C:/Users/ASUS/Desktop/RestuarantManagementSystem/rpic.jpg\");\n"
"}"));
        label = new QLabel(CalDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 170, 151, 41));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label_2 = new QLabel(CalDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 170, 81, 51));
        QFont font2;
        font2.setPointSize(10);
        label_2->setFont(font2);
        pushButton = new QPushButton(CalDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 280, 101, 31));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton->setFont(font3);
        label_cost = new QLabel(CalDialog);
        label_cost->setObjectName(QString::fromUtf8("label_cost"));
        label_cost->setGeometry(QRect(340, 180, 101, 31));
        QFont font4;
        font4.setPointSize(14);
        label_cost->setFont(font4);
        pushButton_2 = new QPushButton(CalDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 680, 161, 41));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_2->setFont(font5);

        retranslateUi(CalDialog);

        QMetaObject::connectSlotsByName(CalDialog);
    } // setupUi

    void retranslateUi(QDialog *CalDialog)
    {
        CalDialog->setWindowTitle(QApplication::translate("CalDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("CalDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Total Cost:</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("CalDialog", "<html><head/><body><h1 style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">TK.</span></h1></body></html>", nullptr));
        pushButton->setText(QApplication::translate("CalDialog", "Order", nullptr));
        label_cost->setText(QApplication::translate("CalDialog", "<b></b>", nullptr));
        pushButton_2->setText(QApplication::translate("CalDialog", "Go to previous page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalDialog: public Ui_CalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALDIALOG_H
