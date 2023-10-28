#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "checkipaddress.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    IPAddress check;
    IPAddressChecked *firstCheck;
    IPAddressChecked *secondCheck;

private slots:

    void on_checkOne_clicked();

    void on_checkTwo_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
