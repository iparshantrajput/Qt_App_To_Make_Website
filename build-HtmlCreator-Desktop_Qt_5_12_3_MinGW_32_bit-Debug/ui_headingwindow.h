/********************************************************************************
** Form generated from reading UI file 'headingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADINGWINDOW_H
#define UI_HEADINGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_headingWindow
{
public:
    QPushButton *saveButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_9;
    QLabel *label_4;
    QLabel *label_5;
    QCheckBox *checkBox;

    void setupUi(QDialog *headingWindow)
    {
        if (headingWindow->objectName().isEmpty())
            headingWindow->setObjectName(QString::fromUtf8("headingWindow"));
        headingWindow->resize(458, 359);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/html-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        headingWindow->setWindowIcon(icon);
        saveButton = new QPushButton(headingWindow);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(360, 320, 75, 23));
        label = new QLabel(headingWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 81, 16));
        lineEdit = new QLineEdit(headingWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 30, 301, 20));
        label_2 = new QLabel(headingWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 61, 16));
        radioButton = new QRadioButton(headingWindow);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 100, 82, 17));
        radioButton_2 = new QRadioButton(headingWindow);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 130, 82, 17));
        radioButton_3 = new QRadioButton(headingWindow);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 160, 82, 17));
        radioButton_4 = new QRadioButton(headingWindow);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(230, 100, 82, 17));
        radioButton_5 = new QRadioButton(headingWindow);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(230, 130, 82, 17));
        radioButton_6 = new QRadioButton(headingWindow);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(230, 160, 82, 17));
        layoutWidget = new QWidget(headingWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 220, 400, 19));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        radioButton_7 = new QRadioButton(layoutWidget);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        horizontalLayout->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(layoutWidget);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        horizontalLayout->addWidget(radioButton_8);

        radioButton_10 = new QRadioButton(layoutWidget);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        horizontalLayout->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(layoutWidget);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));

        horizontalLayout->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(layoutWidget);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));

        horizontalLayout->addWidget(radioButton_12);

        radioButton_9 = new QRadioButton(layoutWidget);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        horizontalLayout->addWidget(radioButton_9);

        label_4 = new QLabel(headingWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 190, 101, 16));
        label_5 = new QLabel(headingWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 260, 121, 16));
        checkBox = new QCheckBox(headingWindow);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 300, 111, 17));

        retranslateUi(headingWindow);

        QMetaObject::connectSlotsByName(headingWindow);
    } // setupUi

    void retranslateUi(QDialog *headingWindow)
    {
        headingWindow->setWindowTitle(QApplication::translate("headingWindow", "Heading Details", nullptr));
        saveButton->setText(QApplication::translate("headingWindow", "Save", nullptr));
        label->setText(QApplication::translate("headingWindow", "Enter Heading:", nullptr));
        label_2->setText(QApplication::translate("headingWindow", "Select size:", nullptr));
        radioButton->setText(QApplication::translate("headingWindow", "h1", nullptr));
        radioButton_2->setText(QApplication::translate("headingWindow", "h2", nullptr));
        radioButton_3->setText(QApplication::translate("headingWindow", "h3", nullptr));
        radioButton_4->setText(QApplication::translate("headingWindow", "h4", nullptr));
        radioButton_5->setText(QApplication::translate("headingWindow", "h5", nullptr));
        radioButton_6->setText(QApplication::translate("headingWindow", "h6", nullptr));
        label_3->setText(QApplication::translate("headingWindow", "Common:", nullptr));
        radioButton_7->setText(QApplication::translate("headingWindow", "Green", nullptr));
        radioButton_8->setText(QApplication::translate("headingWindow", "Red", nullptr));
        radioButton_10->setText(QApplication::translate("headingWindow", "Blue", nullptr));
        radioButton_11->setText(QApplication::translate("headingWindow", "Black", nullptr));
        radioButton_12->setText(QApplication::translate("headingWindow", "Purple", nullptr));
        radioButton_9->setText(QApplication::translate("headingWindow", "Yellow", nullptr));
        label_4->setText(QApplication::translate("headingWindow", "Select Text Color:", nullptr));
        label_5->setText(QApplication::translate("headingWindow", "Choose your own color:", nullptr));
        checkBox->setText(QApplication::translate("headingWindow", "Select Own Color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class headingWindow: public Ui_headingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADINGWINDOW_H
