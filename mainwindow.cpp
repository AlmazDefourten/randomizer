#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>
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

MainWindow::buttonClicked()
{
 int vvod = ui->lineEdit->text().toInt();   
 int random = 1 + rand() % vvod;
}

