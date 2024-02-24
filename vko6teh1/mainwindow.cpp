#include "mainwindow.h"
#include "ui_mainwindow.h"
float n1;
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

void MainWindow::on_num_textChanged(const QString &arg1)
{
    n1=arg1.toFloat();
    ui->num->setText(QString::number(n1));
}


void MainWindow::on_count_clicked()
{
    n1++;
    ui->num->setText(QString::number(n1));
}


void MainWindow::on_reset_clicked()
{
    n1=0;
    ui->num->setText(QString::number(n1));
}

