#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_operation_comboBox_activated(int index);

    void on_algoritm_comboBox_activated(int index);

    void on_input_lineEdit_returnPressed();

    void on_output_lineEdit_returnPressed();

    void on_keyfile_lineEdit_returnPressed();

    void on_execute_pushButton_clicked();

    void on_browseInputButton_clicked();

    void on_browseOutputButton_clicked();

    void on_browseKeyfileButton_clicked();

    void on_clear_pushButton_clicked();

    void on_keyLenght_lineEdit_returnPressed();

    void on_settings_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QString inputPath, outputPath, keyfile;
    int choose_operation = 0;
    int algorithm = 0;
    int key_lenght = 0;
};
#endif // MAINWINDOW_H
