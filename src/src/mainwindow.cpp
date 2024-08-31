#include "../include/mainwindow.h"
#include "../include/ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->menuBar()->addMenu("File");
    this->menuBar()->addMenu("View");
    this->menuBar()->addMenu("Help");
}

MainWindow::~MainWindow()
{
    delete ui;
}
