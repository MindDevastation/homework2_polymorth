#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete firstCheck;
    delete secondCheck;

}


void MainWindow::on_checkOne_clicked()
{
    firstCheck = new IPAddressChecked(ui->firstBit->text().toInt(), ui->secondBit->text().toInt(), ui->thirdBit->text().toInt(), ui->fourthBit->text().toInt());

    QEventLoop loop;
    QTimer::singleShot(1000, &loop, &QEventLoop::quit);
    loop.exec();
    ui->cA->setText("Class A: ");
    ui->classAcheck->setText(this->firstCheck->printIpAddress() + this->firstCheck->classACheck());
    ui->cB->setText("Class B: ");
    ui->classBcheck->setText(this->firstCheck->printIpAddress() + this->firstCheck->classBCheck());
    ui->cC->setText("Class C: ");
    ui->classCcheck->setText(this->firstCheck->printIpAddress() + this->firstCheck->classCCheck());
    ui->cD->setText("Class D: ");
    ui->classDcheck->setText(this->firstCheck->printIpAddress() + this->firstCheck->classDCheck());
    ui->cE->setText("Class E: ");
    ui->classEcheck->setText(this->firstCheck->printIpAddress() + this->firstCheck->classECheck());
}


void MainWindow::on_checkTwo_clicked()
{
    secondCheck = new IPAddressChecked(ui->firstBit_2->text().toInt(), ui->secondBit_2->text().toInt(), ui->secondBit_2->text().toInt(), ui->fourthBit_2->text().toInt());

    QEventLoop loop;
    QTimer::singleShot(1000, &loop, &QEventLoop::quit);
    loop.exec();
    ui->cA_2->setText("Class A: ");
    ui->classAcheck_2->setText(this->secondCheck->printIpAddress() + this->secondCheck->classACheck());
    ui->cB_2->setText("Class B: ");
    ui->classBcheck_2->setText(this->secondCheck->printIpAddress() + this->secondCheck->classBCheck());
    ui->cC_2->setText("Class C: ");
    ui->classCcheck_2->setText(this->secondCheck->printIpAddress() + this->secondCheck->classCCheck());
    ui->cD_2->setText("Class D: ");
    ui->classDcheck_2->setText(this->secondCheck->printIpAddress() + this->secondCheck->classDCheck());
    ui->cE_2->setText("Class E: ");
    ui->classEcheck_2->setText(this->secondCheck->printIpAddress() + this->secondCheck->classECheck());
}

