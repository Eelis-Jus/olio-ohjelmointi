#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_n1_clicked();

    void on_n2_clicked();

    void on_n3_clicked();

    void on_n4_clicked();

    void on_n5_clicked();

    void on_n6_clicked();

    void on_n7_clicked();

    void on_n8_clicked();

    void on_n9n_clicked();

    void on_n0_clicked();

    void on_clear_clicked();

    void on_enter_clicked();

    void on_add_clicked();

    void on_minus_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_num1_textChanged(const QString &arg1);

    void on_num2_textChanged(const QString &arg1);

    void on_result_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
