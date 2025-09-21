#include "CryptoCore.hpp"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>
#include <QDialogButtonBox>

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
}


void MainWindow::on_output_lineEdit_returnPressed()
{
    outputPath = ui->output_lineEdit->text();
}


void MainWindow::on_keyfile_lineEdit_returnPressed()
{
    keyfile = ui->keyfile_lineEdit->text();
}


void MainWindow::on_browseInputButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select Input File");
    if (!filePath.isEmpty()) {
        ui->input_lineEdit->setText(filePath);
    }
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
}


void MainWindow::on_keyLenght_lineEdit_returnPressed()
{
    key_lenght = ui->keyLenght_lineEdit->height();
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
            if(CryptoCore::xorEncryptFile(inputPath.toStdString(), outputPath.toStdString(), keyfile.toStdString())){
                ui->status_label->setText("Successful write data to fiel: ");
                ui->path_label->setText(outputPath);
            }else{
                ui->status_label->setText("Failed write data to file: ");
                ui->path_label->setText(outputPath);
            }
        }else if(algorithm == 1){
            if(CryptoCore::aesEncryptFIle(inputPath.toStdString(), outputPath.toStdString(), keyfile.toStdString())){
                ui->status_label->setText("Successful write data to file: ");
                ui->path_label->setText(outputPath);
            }else{
                ui->status_label->setText("Failed write data to file: ");
                ui->path_label->setText(outputPath);
            }
        }
        break;
        //decrypt without keyfile
    case 1:
        if(algorithm == 0){
            if(CryptoCore::xorDecryptFile(inputPath.toStdString(), outputPath.toStdString(), keyfile.toStdString())){
                ui->status_label->setText("Successful write data to file: ");
                ui->path_label->setText(outputPath);
            }else{
                ui->status_label->setText("Faild write data to file: ");
                ui->path_label->setText(outputPath);
            }
        }else if(algorithm == 1){
            if(CryptoCore::aesDecryptFile(inputPath.toStdString(), outputPath.toStdString(), keyfile.toStdString())){
                ui->status_label->setText("Successful write data to file: ");
                ui->path_label->setText(outputPath);
            }else{
                ui->status_label->setText("Failed write data to file: ");
                ui->path_label->setText(outputPath);
            }
        }
        break;
        //encrypt with keyfile
    case 2:
        if(algorithm == 0){
            if(CryptoCore::encryptWithKeyFile(inputPath.toStdString(), outputPath.toStdString(), "XOR", keyfile.toStdString())){
                ui->status_label->setText("Successful write data to file: ");
                ui->path_label->setText(outputPath);
            }else{
                ui->status_label->setText("Failed write data to file: ");
                ui->path_label->setText(outputPath);
            }
        }else if(algorithm == 1){
            if(CryptoCore::encryptWithKeyFile(inputPath.toStdString(), outputPath.toStdString(), "AES128", keyfile.toStdString())){
                ui->status_label->setText("Successful write data to file: ");
                ui->path_label->setText(outputPath);
            }else{
                ui->status_label->setText("Failed write data to file: ");
                ui->path_label->setText(outputPath);
            }
        }
        break;
        //defrypt with keyfile
    case 3:
        if(algorithm == 0){
            if(CryptoCore::decryptWithKeyFile(inputPath.toStdString(), outputPath.toStdString(), "XOR", keyfile.toStdString())){
                ui->status_label->setText("Successful wrte data to file: ");
                ui->path_label->setText(outputPath);
            }else{
                ui->status_label->setText("Failed write data to file: ");
                ui->path_label->setText(outputPath);
            }
        }else if(algorithm == 1){
            if(CryptoCore::decryptWithKeyFile(inputPath.toStdString(), outputPath.toStdString(), "AES128", keyfile.toStdString())){
                ui->status_label->setText("Successful write data to file: ");
                ui->path_label->setText(outputPath);
            }else{
                ui->status_label->setText("Failed write data to file: ");
                ui->path_label->setText(outputPath);
            }
        }
        break;
        //gen and save key to file
    case 4:
        if(algorithm == 0){
            std::string generatedKey = CryptoCore::xorGenerateKey(key_lenght);
            if(CryptoCore::saveKeyToFile(generatedKey, keyfile.toStdString())){
                ui->status_label->setText("Key save successful to file: !");
                ui->path_label->setText(keyfile);
            }else{
                ui->status_label->setText("Failed to save key to file: ");
                ui->path_label->setText(keyfile);
            }
        }else if(algorithm == 1){
            std::string generatedKey = CryptoCore::aesGenerateKey();
            if(CryptoCore::saveKeyToFile(generatedKey, keyfile.toStdString())){
                ui->status_label->setText("Key save successful to file: !");
                ui->path_label->setText(keyfile);
            }else{
                ui->status_label->setText("Failed to save key to file: ");
                ui->path_label->setText(keyfile);
            }
        }
        break;

    default:

        break;
    }
}


void MainWindow::on_clear_pushButton_clicked()
{
    ui->input_lineEdit->clear();
    ui->output_lineEdit->clear();
    ui->keyfile_lineEdit->clear();
    ui->operation_comboBox->setCurrentIndex(0);
    ui->algoritm_comboBox->setCurrentIndex(0);

    // reset privat varialbles
    inputPath.clear();
    outputPath.clear();
    keyfile.clear();
    choose_operation = 0;
    algorithm = 0;

    ui->status_label->setText("All data reset");
    ui->path_label->clear();
}


void MainWindow::on_settings_pushButton_clicked()
{

}
