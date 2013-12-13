#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "config.h"
#include "conf_qt.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    config* conf = new config();
//    conf->writeAll();
    conf_qt *conf = new conf_qt("conf.ini");
    conf->CreateConf("conf.ini");
}
