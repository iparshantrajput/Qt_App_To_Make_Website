/********************************************************************************
** Form generated from reading UI file 'backgroundimagewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKGROUNDIMAGEWINDOW_H
#define UI_BACKGROUNDIMAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_backGroundImageWindow
{
public:
    QRadioButton *radioButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *backGroundImageWindow)
    {
        if (backGroundImageWindow->objectName().isEmpty())
            backGroundImageWindow->setObjectName(QString::fromUtf8("backGroundImageWindow"));
        backGroundImageWindow->resize(415, 206);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/html-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        backGroundImageWindow->setWindowIcon(icon);
        radioButton = new QRadioButton(backGroundImageWindow);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(40, 70, 82, 17));
        label = new QLabel(backGroundImageWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 141, 16));
        lineEdit = new QLineEdit(backGroundImageWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 70, 221, 20));
        radioButton_2 = new QRadioButton(backGroundImageWindow);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(40, 120, 191, 17));
        pushButton = new QPushButton(backGroundImageWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 170, 75, 23));

        retranslateUi(backGroundImageWindow);

        QMetaObject::connectSlotsByName(backGroundImageWindow);
    } // setupUi

    void retranslateUi(QDialog *backGroundImageWindow)
    {
        backGroundImageWindow->setWindowTitle(QApplication::translate("backGroundImageWindow", "Website's Background", nullptr));
        radioButton->setText(QApplication::translate("backGroundImageWindow", "Image", nullptr));
        label->setText(QApplication::translate("backGroundImageWindow", "Select your background:", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("backGroundImageWindow", "Image URL", nullptr));
        radioButton_2->setText(QApplication::translate("backGroundImageWindow", "Choose colors as background", nullptr));
        pushButton->setText(QApplication::translate("backGroundImageWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class backGroundImageWindow: public Ui_backGroundImageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKGROUNDIMAGEWINDOW_H
