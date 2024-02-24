#include "mainwindow.h"
#include "ui_mainwindow.h"
float numb1=0; //1. numero
float numb2=0; //2. numero
float result=0; //tulos
int  i=2; //käytetään apuna siinä, että saadan aluksi 1. ja sitten 2. numero
int a=0; //käytetään apuna siinä, onko +-/*
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_n1_clicked()
{

    if(i%2==0){ //katsotaan onko i jaollinen kahdella, jos on niin numeron menee numb1
    numb1=numb1*10+1;
        ui->num1->setText(QString::number(numb1));
    }
    else{  //jos i ei jaollinen kahdella, niin numero menee numb2
    numb2=numb2*10+1; //kaava jolla saadaan 1. painalluksella ykköset, seuraavalla kymmenet sitten sadat jne...
    ui->num2->setText(QString::number(numb2));
    }
 //   i++;
}

void MainWindow::on_n2_clicked()
{

    if(i%2==0){
        numb1=numb1*10+2;
        ui->num1->setText(QString::number(numb1));
    }
    else{
        numb2=numb2*10+2;
        ui->num2->setText(QString::number(numb2));
    }
 //   i++;
}

void MainWindow::on_n3_clicked()
{
    if(i%2==0){
        numb1=numb1*10+3;
        ui->num1->setText(QString::number(numb1));
    }
    else{
        numb2=numb2*10+3;
        ui->num2->setText(QString::number(numb2));
    }
 //   i++;
}

void MainWindow::on_n4_clicked()
{
    if(i%2==0){
        numb1=numb1*10+4;
        ui->num1->setText(QString::number(numb1));
    }
    else{
        numb2=numb2*10+4;
        ui->num2->setText(QString::number(numb2));
    }
 //   i++;
}

void MainWindow::on_n5_clicked()
{
    if(i%2==0){
        numb1=numb1*10+5;
        ui->num1->setText(QString::number(numb1));
    }
    else{
        numb2=numb2*10+5;
        ui->num2->setText(QString::number(numb2));
    }
//    i++;
}

void MainWindow::on_n6_clicked()
{
    if(i%2==0){
        numb1=numb1*10+6;
        ui->num1->setText(QString::number(numb1));
    }
    else{
        numb2=numb2*10+6;
        ui->num2->setText(QString::number(numb2));
    }
//    i++;
}

void MainWindow::on_n7_clicked()
{
    if(i%2==0){
        numb1=numb1*10+7;
        ui->num1->setText(QString::number(numb1));
    }
    else{
        numb2=numb2*10+7;
        ui->num2->setText(QString::number(numb2));
    }
 //   i++;
}

void MainWindow::on_n8_clicked()
{
    if(i%2==0){
        numb1=numb1*10+8;
        ui->num1->setText(QString::number(numb1));
    }
    else{
        numb2=numb2*10+8;
        ui->num2->setText(QString::number(numb2));
    }
 //   i++;
}

void MainWindow::on_n9n_clicked()
{
    if(i%2==0){
        numb1=numb1*10+9;
        ui->num1->setText(QString::number(numb1));
    }
    else{
        numb2=numb2*10+9;
        ui->num2->setText(QString::number(numb2));
    }
}

void MainWindow::on_n0_clicked()
{
    if(i%2==0){
        numb1=numb1*10+0;
        ui->num1->setText(QString::number(numb1));
    }
    else{
        numb2=numb2*10+0;
        ui->num2->setText(QString::number(numb2));
    }
}


void MainWindow::on_clear_clicked()
{
    numb1=0;  //numb1 arvoksi 0
    ui->num1->setText(QString::number(numb1));
    numb2=0; //numb 2 arvoksi nolla
     ui->num2->setText(QString::number(numb2));
    result=0; //result arvoksi nolla
    ui->result->setText(QString::number(result));
    i=0;
    a=0;
}

void MainWindow::on_enter_clicked()
{
    if(a==1){
    result=numb1+numb2;
    }
    if(a==2){
    result=numb1-numb2;
    }
    if(a==3){
    result=numb1*numb2;
    }
    if(a==4){
    result=numb1/numb2;
    }
    ui->result->setText(QString::number(result));
}

void MainWindow::on_add_clicked()
{
    i++; //lisätään i yksi niin seuraavat numerot menee numb2
    void on_n0_clicked(); //katsotaan mitä nappia painetaan seuraaavaksi
    void on_n1_clicked();
    void on_n2_clicked();
    void on_n3_clicked();
    void on_n4_clicked();
    void on_n5_clicked();
    void on_n6_clicked();
    void on_n7_clicked();
    void on_n8_clicked();
    void on_n9n_clicked();
    a++; //tällä määritellään mikä toiminta suoritetaan enter clicked funktiossa
}

void MainWindow::on_minus_clicked()
{
     i++;
    void on_n0_clicked();
    void on_n1_clicked();
    void on_n2_clicked();
    void on_n3_clicked();
    void on_n4_clicked();
    void on_n5_clicked();
    void on_n6_clicked();
    void on_n7_clicked();
    void on_n8_clicked();
    void on_n9n_clicked();
    a++;
    a++;
}

void MainWindow::on_mul_clicked()
{
     i++;
    void on_n0_clicked();
    void on_n1_clicked();
    void on_n2_clicked();
    void on_n3_clicked();
    void on_n4_clicked();
    void on_n5_clicked();
    void on_n6_clicked();
    void on_n7_clicked();
    void on_n8_clicked();
    void on_n9n_clicked();
    a++;
    a++;
    a++;
}

void MainWindow::on_div_clicked()
{
    i++;
    void on_n0_clicked();
    void on_n1_clicked();
    void on_n2_clicked();
    void on_n3_clicked();
    void on_n4_clicked();
    void on_n5_clicked();
    void on_n6_clicked();
    void on_n7_clicked();
    void on_n8_clicked();
    void on_n9n_clicked();
    a++;
    a++;
    a++;
    a++;
}

void MainWindow::on_num1_textChanged(const QString &arg1)
{
    numb1=arg1.toFloat();
}

void MainWindow::on_num2_textChanged(const QString &arg1)
{
    numb2=arg1.toFloat();
}

void MainWindow::on_result_textChanged(const QString &arg1)
{
    result=arg1.toFloat();
}

