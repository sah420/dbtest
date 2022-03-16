#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("admin");
    db.setPassword("ZB0jrhV7M1P5");
    db.setDatabaseName("UserData");

    if (db.open()) {
        QMessageBox::information(this, "Connection", "Database Connected Successfully");
    } else {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
}
