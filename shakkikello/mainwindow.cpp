#include "mainwindow.h"
#include "ui_mainwindow.h"
//ei toimi , että progressbar==0 tulisi "player lost the game"
//kello toimii vain yhden kerran, stop game rikkoo/bugaa omalla tavallaan progress barin
//2. pelikerralla sulkematta kelloa välillä. Kello aloittaa aiemmin annetusta ajasta.
//progressbarin maximum näyttää oudolta, koska en saanut selvitettyä mitä ajan yksikkörä progress bar käyttää
//ajat on suurinpiirtein ja mitattu puhelimen sekunttikelloa apuna käyttäen
int player1=0; //pelaaja 1
int player2=0;  //pelaaja 2
int a=3;  //auttaa valitsemaan 120sec tai 5min
int t1=0; //120sec
int t2=0; //5min
int value1=9000000; //sama arvo kuin maximi, 120sec
int value=9000000;
int value3=24000000; //sama arvo kuin maximi, 5min
int value4=24000000;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer= new QTimer(this);
    timer1= new QTimer(this);
    ui->label->setText("press 120sec or 5min");
    }
MainWindow::~MainWindow()
{
    delete ui;
    delete timer; //tuhotaan pointterit
    delete timer1;
    timer=nullptr; //tehdään pointterit nulliksi
    timer1=nullptr;
}

void MainWindow::timerit(){
    if(a==1 && a!=3){ //jos valitaan 5min
        connect(timer1, SIGNAL(timeout()), this,SLOT(on_fiveMin_clicked()));
        timer1->start(1000);
    }
    if(a==0 && a!=3){ //jos valitaan 120 sec
        connect(timer, SIGNAL(timeout()), this,SLOT(on_OneTwentysec_clicked()));
        timer->start(1000);
    }
}

void MainWindow::on_SwitchPlayer1_clicked()
{
    if(player1==1 && player2==0){
  player1=0;
  player2=1;
   }
}
void MainWindow::on_SwitchPlayer2_clicked()
{
   if(player2==1 && player1==0){
        player1=1;
        player2=0;
    }
}

void MainWindow::on_fiveMin_clicked()
{
    if(a==3){
    ui->label->setText("press start game");
    }
    else{
        ui->label->setText("to stop game press stop game");
    }
    a=1;
    t1=0;
    t2=1;
 //   ui->label->setText("press start game");
    timerit();

    ui->progressBar->setMaximum(24000000); //max ja min arvo progress bar:lle
    ui->progressBar->setMinimum(0);
    ui->progressBar_2->setMaximum(24000000); //max ja min toiselle progress bar:lle
    ui->progressBar_2->setMinimum(0);
    while(player1==1 && t2==1 && player2==0){
        ui->progressBar->setValue(value3);
        value3=value3-1;
      //  if(value3==0){
      //          ui->label->setText("player1 lost the game");
     //   }
        qApp->processEvents();
    }
    while(player2==1 && t2==1 && player1==0){
        ui->progressBar_2->setValue(value4);
        value4=value4-1;
     //   if(value4==0){
     //           ui->label->setText("player2 lost the game");
     //   }
        qApp->processEvents();
    }
}

void MainWindow::on_OneTwentysec_clicked()
{
    if(a==3){
        ui->label->setText("press start game");
    }
    else{
        ui->label->setText("to stop game press stop game");
    }
    a=0;
    t1=1;
    t2=0;
   // ui->label->setText("press start game");
    timerit();
    ui->progressBar->setMaximum(9000000); //max ja min arvo progress bar:lle
    ui->progressBar->setMinimum(0);
    ui->progressBar_2->setMaximum(9000000); //max ja min toiselle progress bar:lle
    ui->progressBar_2->setMinimum(0);
    while(player1==1 && t1==1 && player2==0){
        ui->progressBar->setValue(value);
        value=value-1; //vähentää valuesta 1
      //  if(value==0){
      //          ui->label->setText("player1 lost the game");
      //      }
        qApp->processEvents();       
    }
    ui->label->setText("");
    while(player2==1 && t1==1 && player1==0){
        ui->progressBar_2->setValue(value1);
        value1=value1-1;
     //   if(value1==0){
     //           ui->label->setText("player2 lost the game");
     //   }
        qApp->processEvents();
    }
}
void MainWindow::on_startGame_clicked()
{
    player1=1;
    player2=0;
}
void MainWindow::on_StopGame_clicked() //palautetaan kaikki alkuperäisiin arvoihin
{
   // ui->label->setText("press start game");
    player1=0;
    player2=0;
    t1=0;
    t2=0;
    a=3;
    value1=9000000; //sama arvo kuin progress bar maximi
    value=9000000;
    value3=24000000;
    value4=24000000;
    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
}




