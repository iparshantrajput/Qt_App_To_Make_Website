/********************************************************************************
** Form generated from reading UI file 'paragraphwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAGRAPHWINDOW_H
#define UI_PARAGRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_paragraphWindow
{
public:
    QPushButton *save;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QTextEdit *textEdit;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_2;
    QRadioButton *colorButton;

    void setupUi(QDialog *paragraphWindow)
    {
        if (paragraphWindow->objectName().isEmpty())
            paragraphWindow->setObjectName(QString::fromUtf8("paragraphWindow"));
        paragraphWindow->resize(462, 391);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/html-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        paragraphWindow->setWindowIcon(icon);
        save = new QPushButton(paragraphWindow);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(370, 360, 75, 23));
        label = new QLabel(paragraphWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 91, 16));
        label_3 = new QLabel(paragraphWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 160, 61, 16));
        label_4 = new QLabel(paragraphWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 210, 61, 16));
        radioButton_3 = new QRadioButton(paragraphWindow);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(110, 230, 82, 17));
        radioButton_4 = new QRadioButton(paragraphWindow);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(230, 230, 82, 17));
        radioButton_5 = new QRadioButton(paragraphWindow);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(110, 260, 82, 17));
        radioButton_6 = new QRadioButton(paragraphWindow);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(230, 260, 82, 17));
        radioButton_7 = new QRadioButton(paragraphWindow);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(110, 290, 82, 17));
        radioButton_8 = new QRadioButton(paragraphWindow);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(230, 290, 82, 17));
        textEdit = new QTextEdit(paragraphWindow);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(110, 60, 271, 91));
        checkBox = new QCheckBox(paragraphWindow);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(110, 180, 70, 17));
        checkBox_2 = new QCheckBox(paragraphWindow);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(230, 180, 70, 17));
        label_2 = new QLabel(paragraphWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 320, 111, 16));
        colorButton = new QRadioButton(paragraphWindow);
        colorButton->setObjectName(QString::fromUtf8("colorButton"));
        colorButton->setGeometry(QRect(40, 350, 82, 17));

        retranslateUi(paragraphWindow);

        QMetaObject::connectSlotsByName(paragraphWindow);
    } // setupUi

    void retranslateUi(QDialog *paragraphWindow)
    {
        paragraphWindow->setWindowTitle(QApplication::translate("paragraphWindow", "Dialog", nullptr));
        save->setText(QApplication::translate("paragraphWindow", "Save", nullptr));
        label->setText(QApplication::translate("paragraphWindow", "Enter a paragraph", nullptr));
        label_3->setText(QApplication::translate("paragraphWindow", "Select Type:", nullptr));
        label_4->setText(QApplication::translate("paragraphWindow", "Select Color:", nullptr));
        radioButton_3->setText(QApplication::translate("paragraphWindow", "Red", nullptr));
        radioButton_4->setText(QApplication::translate("paragraphWindow", "Blue", nullptr));
        radioButton_5->setText(QApplication::translate("paragraphWindow", "Yellow", nullptr));
        radioButton_6->setText(QApplication::translate("paragraphWindow", "Black", nullptr));
        radioButton_7->setText(QApplication::translate("paragraphWindow", "Purple", nullptr));
        radioButton_8->setText(QApplication::translate("paragraphWindow", "Green", nullptr));
        checkBox->setText(QApplication::translate("paragraphWindow", "Bold", nullptr));
        checkBox_2->setText(QApplication::translate("paragraphWindow", "Italic", nullptr));
        label_2->setText(QApplication::translate("paragraphWindow", "Select Own Color:", nullptr));
        colorButton->setText(QApplication::translate("paragraphWindow", "Choose own", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paragraphWindow: public Ui_paragraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAGRAPHWINDOW_H
