#include "dialog.h"
#include "ui_dialog.h"
#include<QString>
#include<QLineEdit>
#include<QDebug>
#include<QApplication>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Confirm_Button_clicked()
{
    QString usmail=ui->lineEdit->text();
       QString uspass=ui->lineEdit_2->text();
       QString uscpass=ui->lineEdit_3->text();
       qDebug()<<"Email:"<<usmail;
       qDebug()<<"Password:"<<uspass;
       qDebug()<<"Confirm Password:"<<uscpass;
       if(!usmail.isEmpty() && !uspass.isEmpty() && !uscpass.isEmpty())
       {

       }
       else
       {
           qDebug()<<"One field is empty!!";
       }
}

void Dialog::on_Exit_Button_clicked()
{
 QApplication::quit();
}
