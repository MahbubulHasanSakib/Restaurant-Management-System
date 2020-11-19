#include "logindialog.h"
#include "ui_logindialog.h"
#include<t_historydialog.h>
#include<QMessageBox>
LOGINDialog::LOGINDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LOGINDialog)
{
    ui->setupUi(this);
}

LOGINDialog::~LOGINDialog()
{
    delete ui;
}

void LOGINDialog::on_pushButton_clicked()
{
    QString name="Sakib";
    QString password="Qtwarriors";
    if(ui->lineEdit->text()==name && ui->lineEdit_2->text()==password){
    history=new T_historyDialog(this);
    hide();
    history->show();
    }
    else {
       QMessageBox::information(this,"Warning","Wrong name or wrong password");
    }
}
