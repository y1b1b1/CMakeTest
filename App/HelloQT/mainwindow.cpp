#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QIcon icon(QString(":/HelloQT/tab_close_icon-active.png"));
    this->setWindowIcon(icon);
}

MainWindow::~MainWindow()
{
    delete ui;
}
