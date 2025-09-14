#include "CryptoCore.hpp"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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


void MainWindow::on_operation_comboBox_activated(int index)
{
    choose_operation = index;
}


void MainWindow::on_algoritm_comboBox_activated(int index)
{
    algorithm = index;
}



void MainWindow::on_input_lineEdit_returnPressed()
{
    inputPath = ui->input_lineEdit->text();
    qDebug() << "Input received: " << inputPath;
}


void MainWindow::on_output_lineEdit_returnPressed()
{
    outputPath = ui->output_lineEdit->text();
    qDebug() << "Output recived: " << outputPath;
}


void MainWindow::on_keyfile_lineEdit_returnPressed()
{
    keyfile = ui->keyfile_lineEdit->text();
    qDebug() << "Key/keyfile recived: " << keyfile;
}


void MainWindow::on_execute_pushButton_clicked()
{
    switch (choose_operation) {
        //encrypt without keyfile
    case 1:

        break;
        //decrypt without keyfile
    case 2:

        break;
        //encrypt with keyfile
    case 3:

        break;
        //defrypt with keyfile
    case 4:

        break;
        //gen and save jey to file
    case 5:

        break;

    default:
        break;
    }
}

