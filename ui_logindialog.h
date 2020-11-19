/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LOGINDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *LOGINDialog)
    {
        if (LOGINDialog->objectName().isEmpty())
            LOGINDialog->setObjectName(QString::fromUtf8("LOGINDialog"));
        LOGINDialog->resize(894, 744);
        LOGINDialog->setStyleSheet(QString::fromUtf8("QDialog{background-image:url(\"C:/Users/ASUS/Desktop/RestuarantManagementSystem/rpic.jpg\");\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(LOGINDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(LOGINDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color:#daa5ff\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(LOGINDialog);

        QMetaObject::connectSlotsByName(LOGINDialog);
    } // setupUi

    void retranslateUi(QDialog *LOGINDialog)
    {
        LOGINDialog->setWindowTitle(QApplication::translate("LOGINDialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("LOGINDialog", "Log in", nullptr));
        label->setText(QApplication::translate("LOGINDialog", "<b>Name:</b>", nullptr));
        label_2->setText(QApplication::translate("LOGINDialog", "<b>Password:</b>", nullptr));
        pushButton->setText(QApplication::translate("LOGINDialog", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LOGINDialog: public Ui_LOGINDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
