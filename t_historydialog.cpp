#include "t_historydialog.h"
#include "ui_t_historydialog.h"
#include"mainwindow.h"
#include<QMainWindow>
#include<QFile>
#include<QTextStream>
T_historyDialog::T_historyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::T_historyDialog)
{
    ui->setupUi(this);
    QFile file("C:/Users/ASUS/Desktop/RestuarantManagementSystem/setfoods.txt");
    file.open(QFile::ReadOnly |QFile::Text);
    QTextStream in(&file);
    QString text=in.readLine();
    ui->lineEdit->setText(text);
    QString text1=in.readLine();
    ui->lineEdit_2->setText(text1);
    QString text2=in.readLine();
    ui->lineEdit_3->setText(text2);
    QString text3=in.readLine();
    ui->lineEdit_4->setText(text3);
    QString text4=in.readLine();
    ui->lineEdit_5->setText(text4);
    QString text5=in.readLine();
    ui->lineEdit_6->setText(text5);
    QString text6=in.readLine();
    ui->lineEdit_7->setText(text6);
    QString text7=in.readLine();
    ui->lineEdit_8->setText(text7);
    QString text8=in.readLine();
    ui->lineEdit_9->setText(text8);
    QString text9=in.readLine();
    ui->lineEdit_10->setText(text9);
    QString text10=in.readLine();
    ui->lineEdit_11->setText(text10);
    QString text11=in.readLine();
    ui->lineEdit_12->setText(text11);
    QString text12=in.readLine();
    ui->lineEdit_13->setText(text12);
    QString text13=in.readLine();
    ui->lineEdit_14->setText(text13);
    QString text14=in.readLine();
    ui->lineEdit_15->setText(text14);
    QString text15=in.readLine();
    ui->lineEdit_16->setText(text15);
    QString text16=in.readLine();
    ui->lineEdit_17->setText(text16);
    QString text17=in.readLine();
    ui->lineEdit_18->setText(text17);
    QString text18=in.readLine();
    ui->lineEdit_19->setText(text18);
    QString text19=in.readLine();
    ui->lineEdit_20->setText(text19);
    file.close();

}

T_historyDialog::~T_historyDialog()
{
    delete ui;
}

void T_historyDialog::on_pushButton_clicked()
{
    QFile file("C:/Users/ASUS/Desktop/RestuarantManagementSystem/food.txt");
    file.open(QIODevice::WriteOnly |QIODevice::Text);
    QApplication::processEvents();
    QTextStream out(&file);
    QString text=ui->lineEdit->text();
    out<<text<<endl;
    QString text1=ui->lineEdit_2->text();
    out<<text1<<endl;
    QString text2=ui->lineEdit_3->text();
    out<<text2<<endl;
    QString text3=ui->lineEdit_4->text();
    out<<text3<<endl;
    QString text4=ui->lineEdit_5->text();
    out<<text4<<endl;
    QString text5=ui->lineEdit_6->text();
    out<<text5<<endl;
    QString text6=ui->lineEdit_7->text();
    out<<text6<<endl;
    QString text7=ui->lineEdit_8->text();
    out<<text7<<endl;
    QString text8=ui->lineEdit_9->text();
    out<<text8<<endl;
    QString text9=ui->lineEdit_10->text();
    out<<text9<<endl;
    QString text10=ui->lineEdit_11->text();
    out<<text10<<endl;
    QString text11=ui->lineEdit_12->text();
    out<<text11<<endl;
    QString text12=ui->lineEdit_13->text();
    out<<text12<<endl;
    QString text13=ui->lineEdit_14->text();
    out<<text13<<endl;
    QString text14=ui->lineEdit_15->text();
    out<<text14<<endl;
    QString text15=ui->lineEdit_16->text();
    out<<text15<<endl;
    QString text16=ui->lineEdit_17->text();
    out<<text16<<endl;
    QString text17=ui->lineEdit_18->text();
    out<<text17<<endl;
    QString text18=ui->lineEdit_19->text();
    out<<text18<<endl;
    QString text19=ui->lineEdit_20->text();
    out<<text19<<endl;
    file.close();
 }

void T_historyDialog::on_pushButton_2_clicked()
{
    m=new MainWindow(this);
    m->show();
    hide();
}
