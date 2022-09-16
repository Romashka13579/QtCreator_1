#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

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



void MainWindow::on_ButtonAsk_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question (this, "Question", "Do you have a car", QMessageBox::Yes | QMessageBox::No);
    if(answer == QMessageBox::Yes)
    {
        QMessageBox::information (this, "Answer", "Congratulations!");
    }
    else if(answer == QMessageBox::No)
    {
        QMessageBox::information (this, "Answer", "You haven't got a car yet(");
    }
}
void MainWindow::on_ButtonInformationQt_clicked()
{
    QMessageBox::aboutQt (this, "AboutQt");
}
void MainWindow::on_ButtonInformation_clicked()
{
    QMessageBox::information (this, "About", "You can write a text in textline below");
}

