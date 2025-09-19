#include "CryptoCore.hpp"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>

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
    //get new value of variables from UI
    inputPath = ui->input_lineEdit->text();
    outputPath = ui->output_lineEdit->text();
    keyfile = ui->keyfile_lineEdit->text();
    choose_operation = ui->operation_comboBox->currentIndex();
    algorithm = ui->algoritm_comboBox->currentIndex();

    switch (choose_operation) {
        //encrypt without keyfile
    case 0:
        if(algorithm == 0){
            ui->status_label->setText("XOR case 1");
        }else if(algorithm == 1){
            ui->status_label->setText("AES128 case 1");
        }else{
            ui->status_label->setText("Error: invalid algorithm case 1");
        }
        break;
        //decrypt without keyfile
    case 1:
        if(algorithm == 0){
            ui->status_label->setText("XOR case 2");
        }else if(algorithm == 1){
            ui->status_label->setText("AES case 2");
        }else {
            ui->status_label->setText("Error invalid algorithm case 2");
        }
        break;
        //encrypt with keyfile
    case 2:
        if(algorithm == 0){
            ui->status_label->setText("XOR case 3");
        }else if(algorithm == 1){
            ui->status_label->setText("AES case 3");
        }else {
            ui->status_label->setText("Error invalid algorithm case 3");
        }
        break;
        //defrypt with keyfile
    case 3:
        if(algorithm == 0){
            ui->status_label->setText("XOR case 4");
        }else if(algorithm == 1){
            ui->status_label->setText("AES case 4");
        }else {
            ui->status_label->setText("Error invalid algorithm case 4");
        }
        break;
        //gen and save jey to file
    case 4:
        if(algorithm == 0){
            ui->status_label->setText("XOR case 5");
        }else if(algorithm == 1){
            ui->status_label->setText("AES case 5");
        }else {
            ui->status_label->setText("Error invalid algorithm case 5");
        }
        break;

    default:
        ui->status_label->setText("default");
        break;
    }

    qDebug() << "=== Execute button clicked ===";
    qDebug() << "Input path:" << ui->input_lineEdit->text();
    qDebug() << "Output path:" << ui->output_lineEdit->text();
    qDebug() << "Keyfile:" << ui->keyfile_lineEdit->text();
    qDebug() << "Operation index:" << ui->operation_comboBox->currentIndex();
    qDebug() << "Algorithm index:" << ui->algoritm_comboBox->currentIndex();
}


void MainWindow::on_browseInputButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select Input File");
    if (!filePath.isEmpty()) {
        ui->input_lineEdit->setText(filePath);
    }
    qDebug() << "input file: "<<filePath;
}


void MainWindow::on_browseOutputButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select Output File");
    if (!filePath.isEmpty()){
        ui->output_lineEdit->setText(filePath);
    }
    qDebug() << "Output file: "<< filePath;
}


void MainWindow::on_browseKeyfileButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select keyfile");
    if (!filePath.isEmpty()){
        ui->keyfile_lineEdit->setText(filePath);
    }
    qDebug() << "keyfile: " << filePath;
}

