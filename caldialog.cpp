#include "caldialog.h"
#include "ui_caldialog.h"
#include<lastdialog.h>
#include<t_historydialog.h>
#include<mainwindow.h>
#include<QDate>
CalDialog::CalDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalDialog)
{
    ui->setupUi(this);
}

CalDialog::~CalDialog()
{
    delete ui;
}
void CalDialog::output(int cost)
{
    ui->label_cost->setText(QString::number(cost));
}
void CalDialog::on_pushButton_clicked()
{
    QString pay;
    pay=ui->label_cost->text();
    ld=new LastDialog(this);
    hide();
    ld->lastoutput(pay);
    ld->show();

}

void CalDialog::on_pushButton_2_clicked()
{
    qm=new MainWindow(this);
    qm->show();
    hide();
}
