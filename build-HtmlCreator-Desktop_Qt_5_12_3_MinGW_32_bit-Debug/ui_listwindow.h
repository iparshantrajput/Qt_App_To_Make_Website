/********************************************************************************
** Form generated from reading UI file 'listwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWINDOW_H
#define UI_LISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_listwindow
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_8;
    QLabel *label_9;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;

    void setupUi(QDialog *listwindow)
    {
        if (listwindow->objectName().isEmpty())
            listwindow->setObjectName(QString::fromUtf8("listwindow"));
        listwindow->resize(474, 452);
        pushButton = new QPushButton(listwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 420, 75, 21));
        lineEdit = new QLineEdit(listwindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 90, 113, 20));
        lineEdit_2 = new QLineEdit(listwindow);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 120, 113, 20));
        lineEdit_3 = new QLineEdit(listwindow);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 150, 113, 20));
        lineEdit_4 = new QLineEdit(listwindow);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 180, 113, 20));
        lineEdit_5 = new QLineEdit(listwindow);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 210, 113, 20));
        label = new QLabel(listwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 211, 20));
        label_2 = new QLabel(listwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 90, 47, 13));
        label_3 = new QLabel(listwindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 120, 47, 13));
        label_4 = new QLabel(listwindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 150, 47, 13));
        label_5 = new QLabel(listwindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 180, 47, 13));
        label_6 = new QLabel(listwindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 210, 47, 13));
        label_7 = new QLabel(listwindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 260, 141, 16));
        radioButton = new QRadioButton(listwindow);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(120, 340, 82, 17));
        radioButton_2 = new QRadioButton(listwindow);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(120, 370, 82, 17));
        label_8 = new QLabel(listwindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 310, 81, 16));
        label_9 = new QLabel(listwindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(220, 310, 71, 20));
        radioButton_3 = new QRadioButton(listwindow);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(290, 340, 82, 17));
        radioButton_4 = new QRadioButton(listwindow);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(290, 370, 82, 17));

        retranslateUi(listwindow);

        QMetaObject::connectSlotsByName(listwindow);
    } // setupUi

    void retranslateUi(QDialog *listwindow)
    {
        listwindow->setWindowTitle(QApplication::translate("listwindow", "List Details", nullptr));
        pushButton->setText(QApplication::translate("listwindow", "save", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("listwindow", "Line 1", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("listwindow", "Line 2", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("listwindow", "Line 3", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QApplication::translate("listwindow", "Line 4", nullptr));
        lineEdit_5->setPlaceholderText(QApplication::translate("listwindow", "Line 5", nullptr));
        label->setText(QApplication::translate("listwindow", "Enter your list items here down below:", nullptr));
        label_2->setText(QApplication::translate("listwindow", "1)", nullptr));
        label_3->setText(QApplication::translate("listwindow", "2)", nullptr));
        label_4->setText(QApplication::translate("listwindow", "3)", nullptr));
        label_5->setText(QApplication::translate("listwindow", "4)", nullptr));
        label_6->setText(QApplication::translate("listwindow", "5)", nullptr));
        label_7->setText(QApplication::translate("listwindow", "Choose your list property:", nullptr));
        radioButton->setText(QApplication::translate("listwindow", "Disc bullets", nullptr));
        radioButton_2->setText(QApplication::translate("listwindow", "Square bullets", nullptr));
        label_8->setText(QApplication::translate("listwindow", "Unordered List:", nullptr));
        label_9->setText(QApplication::translate("listwindow", " Ordered List:", nullptr));
        radioButton_3->setText(QApplication::translate("listwindow", "Numbers", nullptr));
        radioButton_4->setText(QApplication::translate("listwindow", "Roman ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listwindow: public Ui_listwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWINDOW_H
