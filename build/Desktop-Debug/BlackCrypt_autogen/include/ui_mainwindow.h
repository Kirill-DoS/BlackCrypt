/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionf;
    QWidget *centralwidget;
    QLabel *operation_label;
    QLabel *algorithm_label;
    QComboBox *operation_comboBox;
    QComboBox *algoritm_comboBox;
    QLabel *input_label;
    QLabel *output_label;
    QLabel *keyfile_label;
    QLineEdit *input_lineEdit;
    QLineEdit *output_lineEdit;
    QLineEdit *keyfile_lineEdit;
    QPushButton *execute_pushButton;
    QPushButton *clear_pushButton;
    QPushButton *settings_pushButton;
    QLabel *status_label;
    QPushButton *browseInputButton;
    QPushButton *browseOutputButton;
    QPushButton *browseKeyfileButton;
    QMenuBar *menubar;
    QMenu *menuBlackCrypt;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionf = new QAction(MainWindow);
        actionf->setObjectName("actionf");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        operation_label = new QLabel(centralwidget);
        operation_label->setObjectName("operation_label");
        operation_label->setGeometry(QRect(30, 50, 81, 21));
        algorithm_label = new QLabel(centralwidget);
        algorithm_label->setObjectName("algorithm_label");
        algorithm_label->setGeometry(QRect(30, 100, 81, 31));
        operation_comboBox = new QComboBox(centralwidget);
        operation_comboBox->addItem(QString());
        operation_comboBox->addItem(QString());
        operation_comboBox->addItem(QString());
        operation_comboBox->addItem(QString());
        operation_comboBox->addItem(QString());
        operation_comboBox->setObjectName("operation_comboBox");
        operation_comboBox->setGeometry(QRect(170, 50, 171, 26));
        algoritm_comboBox = new QComboBox(centralwidget);
        algoritm_comboBox->addItem(QString());
        algoritm_comboBox->addItem(QString());
        algoritm_comboBox->setObjectName("algoritm_comboBox");
        algoritm_comboBox->setGeometry(QRect(170, 100, 171, 26));
        input_label = new QLabel(centralwidget);
        input_label->setObjectName("input_label");
        input_label->setGeometry(QRect(30, 200, 91, 21));
        output_label = new QLabel(centralwidget);
        output_label->setObjectName("output_label");
        output_label->setGeometry(QRect(30, 250, 91, 16));
        keyfile_label = new QLabel(centralwidget);
        keyfile_label->setObjectName("keyfile_label");
        keyfile_label->setGeometry(QRect(30, 290, 91, 16));
        input_lineEdit = new QLineEdit(centralwidget);
        input_lineEdit->setObjectName("input_lineEdit");
        input_lineEdit->setGeometry(QRect(150, 200, 113, 26));
        output_lineEdit = new QLineEdit(centralwidget);
        output_lineEdit->setObjectName("output_lineEdit");
        output_lineEdit->setGeometry(QRect(150, 240, 113, 26));
        keyfile_lineEdit = new QLineEdit(centralwidget);
        keyfile_lineEdit->setObjectName("keyfile_lineEdit");
        keyfile_lineEdit->setGeometry(QRect(150, 280, 113, 26));
        execute_pushButton = new QPushButton(centralwidget);
        execute_pushButton->setObjectName("execute_pushButton");
        execute_pushButton->setGeometry(QRect(30, 360, 141, 41));
        clear_pushButton = new QPushButton(centralwidget);
        clear_pushButton->setObjectName("clear_pushButton");
        clear_pushButton->setGeometry(QRect(200, 360, 141, 41));
        settings_pushButton = new QPushButton(centralwidget);
        settings_pushButton->setObjectName("settings_pushButton");
        settings_pushButton->setGeometry(QRect(370, 360, 141, 41));
        status_label = new QLabel(centralwidget);
        status_label->setObjectName("status_label");
        status_label->setGeometry(QRect(40, 430, 461, 31));
        browseInputButton = new QPushButton(centralwidget);
        browseInputButton->setObjectName("browseInputButton");
        browseInputButton->setGeometry(QRect(350, 195, 111, 31));
        browseOutputButton = new QPushButton(centralwidget);
        browseOutputButton->setObjectName("browseOutputButton");
        browseOutputButton->setGeometry(QRect(350, 235, 111, 31));
        browseKeyfileButton = new QPushButton(centralwidget);
        browseKeyfileButton->setObjectName("browseKeyfileButton");
        browseKeyfileButton->setGeometry(QRect(350, 275, 111, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuBlackCrypt = new QMenu(menubar);
        menuBlackCrypt->setObjectName("menuBlackCrypt");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuBlackCrypt->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionf->setText(QCoreApplication::translate("MainWindow", "f", nullptr));
        operation_label->setText(QCoreApplication::translate("MainWindow", "Operation:", nullptr));
        algorithm_label->setText(QCoreApplication::translate("MainWindow", "Algorithm:", nullptr));
        operation_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "encrypt without keyfile", nullptr));
        operation_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "decrypt without keyfile", nullptr));
        operation_comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "encrypt with keyfile", nullptr));
        operation_comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "decrypt with keyfile", nullptr));
        operation_comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "generate and save key to file", nullptr));

        algoritm_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "XOR_Cipher", nullptr));
        algoritm_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "AES128", nullptr));

        input_label->setText(QCoreApplication::translate("MainWindow", "Input File:", nullptr));
        output_label->setText(QCoreApplication::translate("MainWindow", "Output File:", nullptr));
        keyfile_label->setText(QCoreApplication::translate("MainWindow", "key/keyfile", nullptr));
        execute_pushButton->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        clear_pushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        settings_pushButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        status_label->setText(QString());
        browseInputButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        browseOutputButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        browseKeyfileButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        menuBlackCrypt->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
