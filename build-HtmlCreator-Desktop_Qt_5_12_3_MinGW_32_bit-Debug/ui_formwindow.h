/********************************************************************************
** Form generated from reading UI file 'formwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMWINDOW_H
#define UI_FORMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formwindow
{
public:
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QCheckBox *checkBox_7;

    void setupUi(QDialog *formwindow)
    {
        if (formwindow->objectName().isEmpty())
            formwindow->setObjectName(QString::fromUtf8("formwindow"));
        formwindow->resize(410, 353);
        label = new QLabel(formwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 70, 241, 20));
        checkBox = new QCheckBox(formwindow);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 110, 70, 17));
        checkBox_2 = new QCheckBox(formwindow);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(30, 140, 70, 17));
        checkBox_3 = new QCheckBox(formwindow);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(30, 230, 91, 17));
        checkBox_4 = new QCheckBox(formwindow);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(30, 170, 81, 17));
        checkBox_5 = new QCheckBox(formwindow);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(30, 290, 91, 17));
        checkBox_6 = new QCheckBox(formwindow);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(30, 260, 70, 17));
        label_2 = new QLabel(formwindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 121, 16));
        lineEdit = new QLineEdit(formwindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 40, 151, 20));
        pushButton = new QPushButton(formwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 320, 75, 23));
        checkBox_7 = new QCheckBox(formwindow);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(30, 200, 81, 17));

        retranslateUi(formwindow);

        QMetaObject::connectSlotsByName(formwindow);
    } // setupUi

    void retranslateUi(QDialog *formwindow)
    {
        formwindow->setWindowTitle(QApplication::translate("formwindow", "Form Details", nullptr));
        label->setText(QApplication::translate("formwindow", "Select the options you want to have in your form:", nullptr));
        checkBox->setText(QApplication::translate("formwindow", "First Name", nullptr));
        checkBox_2->setText(QApplication::translate("formwindow", "Last Name", nullptr));
        checkBox_3->setText(QApplication::translate("formwindow", "Phone Number", nullptr));
        checkBox_4->setText(QApplication::translate("formwindow", "Date of Birth ", nullptr));
        checkBox_5->setText(QApplication::translate("formwindow", "Comment Box", nullptr));
        checkBox_6->setText(QApplication::translate("formwindow", "Email", nullptr));
        label_2->setText(QApplication::translate("formwindow", "Enter Name of your form:", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("formwindow", "e.g \"Personal Info\"", nullptr));
        pushButton->setText(QApplication::translate("formwindow", "save", nullptr));
        checkBox_7->setText(QApplication::translate("formwindow", "Gender", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formwindow: public Ui_formwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMWINDOW_H
