/********************************************************************************
** Form generated from reading UI file 'lastdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTDIALOG_H
#define UI_LASTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LastDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *LastDialog)
    {
        if (LastDialog->objectName().isEmpty())
            LastDialog->setObjectName(QString::fromUtf8("LastDialog"));
        LastDialog->resize(934, 733);
        LastDialog->setStyleSheet(QString::fromUtf8("QDialog{background-image:url(\"C:/Users/ASUS/Desktop/RestuarantManagementSystem/rpic.jpg\");\n"
"}"));
        label = new QLabel(LastDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 80, 261, 51));
        label_2 = new QLabel(LastDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 90, 91, 31));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color:#daa5ff\n"
"}"));
        label_3 = new QLabel(LastDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(410, 90, 81, 31));
        label_3->setFont(font);
        label_4 = new QLabel(LastDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 140, 611, 261));
        pushButton = new QPushButton(LastDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 620, 131, 41));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        retranslateUi(LastDialog);

        QMetaObject::connectSlotsByName(LastDialog);
    } // setupUi

    void retranslateUi(QDialog *LastDialog)
    {
        LastDialog->setWindowTitle(QApplication::translate("LastDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("LastDialog", "<h1>You have to pay:</h1>", nullptr));
        label_2->setText(QApplication::translate("LastDialog", "<h1></h1>", nullptr));
        label_3->setText(QApplication::translate("LastDialog", "<html><head/><body><p>TK</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("LastDialog", "<h1>We have received your order.<br/>\n"
"We will deliver the items soon.Thank you <br/>for your order and always stay with us.</h1>\n"
"", nullptr));
        pushButton->setText(QApplication::translate("LastDialog", "Go to home page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LastDialog: public Ui_LastDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASTDIALOG_H
