/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QLabel *label;

    void setupUi(QDialog *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName("secondwindow");
        secondwindow->resize(400, 300);
        label = new QLabel(secondwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 130, 91, 31));

        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QDialog *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("secondwindow", "hello world", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
