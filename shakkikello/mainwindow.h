#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <QThread>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SwitchPlayer1_clicked();

    void on_SwitchPlayer2_clicked();

    void on_OneTwentysec_clicked();

    void on_fiveMin_clicked();

    void on_startGame_clicked();

    void on_StopGame_clicked();

 //   void on_label_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    void timerit();
       QTimer * timer;
    QTimer * timer1;
};
#endif // MAINWINDOW_H
