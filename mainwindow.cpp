#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<logindialog.h>
#include<caldialog.h>
#include<t_historydialog.h>
#include<QFile>
#include<QTextStream>
#include<QPixmap>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    for(int i=0;i<1001;i++)
       ui->comboBox->addItem(QString::number((i)));
    for(int i=0;i<1001;i++)
       ui->comboBox_2->addItem(QString::number((i)));
    for(int i=0;i<1001;i++)
       ui->comboBox_3->addItem(QString::number((i)));
    for(int i=0;i<1001;i++)
       ui->comboBox_4->addItem(QString::number((i)));
    for(int i=0;i<1001;i++)
       ui->comboBox_5->addItem(QString::number((i)));
    for(int i=0;i<1001;i++)
       ui->comboBox_6->addItem(QString::number((i)));
    for(int i=0;i<1001;i++)
       ui->comboBox_7->addItem(QString::number((i)));
    for(int i=0;i<1001;i++)
       ui->comboBox_8->addItem(QString::number((i)));
    for(int i=0;i<1001;i++)
       ui->comboBox_9->addItem(QString::number((i)));
    for(int i=0;i<1001;i++)
       ui->comboBox_10->addItem(QString::number((i)));
    QFile file("C:/Users/ASUS/Desktop/RestuarantManagementSystem/food.txt");
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
    QFile file1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/setfoods.txt");
    file1.open(QIODevice::WriteOnly |QIODevice::Text);
    QApplication::processEvents();
    QTextStream out(&file1);
    QString ftext=ui->lineEdit->text();
    out<<ftext<<endl;
    QString ftext1=ui->lineEdit_2->text();
    out<<ftext1<<endl;
    QString ftext2=ui->lineEdit_3->text();
    out<<ftext2<<endl;
    QString ftext3=ui->lineEdit_4->text();
    out<<ftext3<<endl;
    QString ftext4=ui->lineEdit_5->text();
    out<<ftext4<<endl;
    QString ftext5=ui->lineEdit_6->text();
    out<<ftext5<<endl;
    QString ftext6=ui->lineEdit_7->text();
    out<<ftext6<<endl;
    QString ftext7=ui->lineEdit_8->text();
    out<<ftext7<<endl;
    QString ftext8=ui->lineEdit_9->text();
    out<<ftext8<<endl;
    QString ftext9=ui->lineEdit_10->text();
    out<<ftext9<<endl;
    QString ftext10=ui->lineEdit_11->text();
    out<<ftext10<<endl;
    QString ftext11=ui->lineEdit_12->text();
    out<<ftext11<<endl;
    QString ftext12=ui->lineEdit_13->text();
    out<<ftext12<<endl;
    QString ftext13=ui->lineEdit_14->text();
    out<<ftext13<<endl;
    QString ftext14=ui->lineEdit_15->text();
    out<<ftext14<<endl;
    QString ftext15=ui->lineEdit_16->text();
    out<<ftext15<<endl;
    QString ftext16=ui->lineEdit_17->text();
    out<<ftext16<<endl;
    QString ftext17=ui->lineEdit_18->text();
    out<<ftext17<<endl;
    QString ftext18=ui->lineEdit_19->text();
    out<<ftext18<<endl;
    QString ftext19=ui->lineEdit_20->text();
    out<<ftext19<<endl;
    file1.close();

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_purchase_clicked()
{
    int cost;
   cal=new CalDialog(this);
   hide();
   cost =((ui->comboBox->currentIndex())*(ui->lineEdit_11->text().toInt()))+((ui->comboBox_2->currentIndex())*(ui->lineEdit_12->text().toInt()))+
           ((ui->comboBox_3->currentIndex())*(ui->lineEdit_13->text().toInt()))+((ui->comboBox_4->currentIndex())*(ui->lineEdit_14->text().toInt()))+((ui->comboBox_5->currentIndex())*(ui->lineEdit_15->text().toInt()))+
           ((ui->comboBox_6->currentIndex())*(ui->lineEdit_16->text().toInt()))+((ui->comboBox_7->currentIndex())*(ui->lineEdit_17->text().toInt()))+
           ((ui->comboBox_8->currentIndex())*(ui->lineEdit_18->text().toInt()))+((ui->comboBox_9->currentIndex())*(ui->lineEdit_19->text().toInt()))+((ui->comboBox_10->currentIndex())*(ui->lineEdit_20->text().toInt()));
   cal->output(cost);
   cal->show();

}
void MainWindow::on_pushButton_login_clicked()
{
    login=new LOGINDialog(this);
    hide();
    login->show();
}


void MainWindow::on_pushButton_clicked()
{
 if(ui->lineEdit->text()=="Fried Chickens")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/fried chickens.jpeg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }
 else if(ui->lineEdit->text()=="Grill Burger")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/grill burger.jpg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }
 else if(ui->lineEdit->text()=="Club Sandwich")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/club sandwitch.jpeg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }
 else if(ui->lineEdit->text()=="Tandoori Wings")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tandoori wings.jpg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }
 else if(ui->lineEdit->text()=="Spicy Hot Wings")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/spicy hot wings.jpg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }

 else if(ui->lineEdit->text()=="Spring Roll")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken-spring-.jpg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }
 else if(ui->lineEdit->text()=="Garlic Chicken")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/garlic chicken.jpg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }
 else if(ui->lineEdit->text()=="Chicken Stew")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tuscan-chicken-stew-1.jpg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }
 else if(ui->lineEdit->text()=="Soup")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Egg-drop-soup.jpg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }
 else if(ui->lineEdit->text()=="Meat Ball")
 {
     QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/meat ball.jpg");
     ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
 }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->lineEdit_2->text()=="Fried Chickens")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/fried chickens.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_2->text()=="Grill Burger")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/grill burger.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_2->text()=="Club Sandwich")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/club sandwitch.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_2->text()=="Tandoori Wings")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tandoori wings.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_2->text()=="Spicy Hot Wings")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/spicy hot wings.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

    else if(ui->lineEdit_2->text()=="Spring Roll")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken-spring-.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_2->text()=="Garlic Chicken")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/garlic chicken.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_2->text()=="Chicken Stew")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tuscan-chicken-stew-1.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_2->text()=="Soup")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Egg-drop-soup.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_2->text()=="Meat Ball")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/meat ball.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    if(ui->lineEdit_3->text()=="Fried Chickens")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/fried chickens.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_3->text()=="Grill Burger")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/grill burger.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_3->text()=="Club Sandwich")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/club sandwitch.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_3->text()=="Tandoori Wings")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tandoori wings.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_3->text()=="Spicy Hot Wings")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/spicy hot wings.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

    else if(ui->lineEdit_3->text()=="Spring Roll")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken-spring-.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_3->text()=="Garlic Chicken")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/garlic chicken.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_3->text()=="Chicken Stew")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tuscan-chicken-stew-1.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_3->text()=="Soup")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Egg-drop-soup.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_3->text()=="Meat Ball")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/meat ball.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    if(ui->lineEdit_4->text()=="Fried Chickens")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/fried chickens.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_4->text()=="Grill Burger")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/grill burger.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_4->text()=="Club Sandwich")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/club sandwitch.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_4->text()=="Tandoori Wings")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tandoori wings.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_4->text()=="Spicy Hot Wings")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/spicy hot wings.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

    else if(ui->lineEdit_4->text()=="Spring Roll")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken-spring-.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_4->text()=="Garlic Chicken")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/garlic chicken.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_4->text()=="Chicken Stew")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tuscan-chicken-stew-1.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_4->text()=="Soup")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Egg-drop-soup.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_4->text()=="Meat Ball")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/meat ball.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_pushButton_5_clicked()
{
    if(ui->lineEdit_5->text()=="Fried Chickens")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/fried chickens.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_5->text()=="Grill Burger")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/grill burger.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_5->text()=="Club Sandwich")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/club sandwitch.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_5->text()=="Tandoori Wings")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tandoori wings.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_5->text()=="Spicy Hot Wings")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/spicy hot wings.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_5->text()=="Spring Roll")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken-spring-.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_5->text()=="Garlic Chicken")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/garlic chicken.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_5->text()=="Chicken Stew")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tuscan-chicken-stew-1.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_5->text()=="Soup")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Egg-drop-soup.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_5->text()=="Meat Ball")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/meat ball.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_pushButton_6_clicked()
{
    if(ui->lineEdit_6->text()=="Pizza")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/pizza.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_6->text()=="Tacos")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tacos.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_6->text()=="French Fries")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/french fries.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_6->text()=="Hot Dogs")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/hot dogs.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_6->text()=="Desserts")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/desserts.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_6->text()=="Zaytun Special Fried Rice")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/zytun fried rice.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_6->text()=="Chicken Chowmein")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chowmein.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_6->text()=="Special Fried Chicken(6pcs)")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Special fried chicken.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit->text()=="Chicken Chilli Onion")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chilli onion.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_6->text()=="Beef with Oyester")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/beef with oyester.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_pushButton_7_clicked()
{
    if(ui->lineEdit_7->text()=="Pizza")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/pizza.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_7->text()=="Tacos")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tacos.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_7->text()=="French Fries")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/french fries.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_7->text()=="Hot Dogs")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/hot dogs.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_7->text()=="Desserts")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/desserts.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_7->text()=="Zaytun Special Fried Rice")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/zytun fried rice.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_7->text()=="Chicken Chowmein")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chowmein.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_7->text()=="Special Fried Chicken(6pcs)")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Special fried chicken.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_7->text()=="Chicken Chilli Onion")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chilli onion.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_7->text()=="Beef with Oyester")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/beef with oyester.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_pushButton_8_clicked()
{
    if(ui->lineEdit_8->text()=="Pizza")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/pizza.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_8->text()=="Tacos")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tacos.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_8->text()=="French Fries")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/french fries.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_8->text()=="Hot Dogs")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/hot dogs.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_8->text()=="Desserts")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/desserts.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_8->text()=="Zaytun Special Fried Rice")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/zytun fried rice.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_8->text()=="Chicken Chowmein")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chowmein.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_8->text()=="Special Fried Chicken(6pcs)")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Special fried chicken.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_8->text()=="Chicken Chilli Onion")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chilli onion.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_8->text()=="Beef with Oyester")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/beef with oyester.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }

}

void MainWindow::on_pushButton_9_clicked()
{
    if(ui->lineEdit_9->text()=="Pizza")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/pizza.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_9->text()=="Tacos")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tacos.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_9->text()=="French Fries")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/french fries.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_9->text()=="Hot Dogs")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/hot dogs.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_9->text()=="Desserts")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/desserts.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_9->text()=="Zaytun Special Fried Rice")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/zytun fried rice.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_9->text()=="Chicken Chowmein")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chowmein.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_9->text()=="Special Fried Chicken(6pcs)")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Special fried chicken.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_9->text()=="Chicken Chilli Onion")
    {
       QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chilli onion.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_9->text()=="Beef with Oyester")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/beef with oyester.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }


}

void MainWindow::on_pushButton_10_clicked()
{
    if(ui->lineEdit_10->text()=="Pizza")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/pizza.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_10->text()=="Tacos")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/tacos.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_10->text()=="French Fries")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/french fries.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_10->text()=="Hot Dogs")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/hot dogs.jpeg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_10->text()=="Desserts")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/desserts.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_10->text()=="Zaytun Special Fried Rice")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/zytun fried rice.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_10->text()=="Chicken Chowmein")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chowmein.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_10->text()=="Special Fried Chicken(6pcs)")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/Special fried chicken.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_10->text()=="Chicken Chilli Onion")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/chicken chilli onion.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }
    else if(ui->lineEdit_10->text()=="Beef with Oyester")
    {
        QPixmap pic1("C:/Users/ASUS/Desktop/RestuarantManagementSystem/beef with oyester.jpg");
        ui->label->setPixmap(pic1.scaled(300,300,Qt::KeepAspectRatio));
    }


}
