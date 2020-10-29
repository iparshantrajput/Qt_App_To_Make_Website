/********************************************************************************
** Form generated from reading UI file 'linkwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKWINDOW_H
#define UI_LINKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_linkWindow
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *linkWindow)
    {
        if (linkWindow->objectName().isEmpty())
            linkWindow->setObjectName(QString::fromUtf8("linkWindow"));
        linkWindow->resize(400, 300);
        pushButton = new QPushButton(linkWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 260, 75, 23));
        lineEdit = new QLineEdit(linkWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(112, 60, 241, 20));
        label = new QLabel(linkWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 81, 20));
        label_2 = new QLabel(linkWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 150, 91, 20));
        lineEdit_2 = new QLineEdit(linkWindow);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 150, 181, 20));

        retranslateUi(linkWindow);

        QMetaObject::connectSlotsByName(linkWindow);
    } // setupUi

    void retranslateUi(QDialog *linkWindow)
    {
        linkWindow->setWindowTitle(QApplication::translate("linkWindow", "Link Details", nullptr));
        pushButton->setText(QApplication::translate("linkWindow", "save", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("linkWindow", "e.g \"About\"", nullptr));
        label->setText(QApplication::translate("linkWindow", "Enter link here:", nullptr));
        label_2->setText(QApplication::translate("linkWindow", "Enter Name here:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linkWindow: public Ui_linkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKWINDOW_H
