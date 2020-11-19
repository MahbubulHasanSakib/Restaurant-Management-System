#include "lastdialog.h"
#include "ui_lastdialog.h"
#include"mainwindow.h"
LastDialog::LastDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LastDialog)
{
    ui->setupUi(this);
}

LastDialog::~LastDialog()
{
    delete ui;
}
void LastDialog::lastoutput(QString pay)
{
    ui->label_2->setText(pay);
}

void LastDialog::on_pushButton_clicked()
{
    q=new MainWindow(this);
    q->show();
    hide();
}
