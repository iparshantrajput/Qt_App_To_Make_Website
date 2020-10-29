/********************************************************************************
** Form generated from reading UI file 'imagewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEWINDOW_H
#define UI_IMAGEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imageWindow
{
public:
    QPushButton *saveButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *spinBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QLabel *label_7;

    void setupUi(QDialog *imageWindow)
    {
        if (imageWindow->objectName().isEmpty())
            imageWindow->setObjectName(QString::fromUtf8("imageWindow"));
        imageWindow->resize(403, 221);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/html-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        imageWindow->setWindowIcon(icon);
        saveButton = new QPushButton(imageWindow);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(300, 180, 75, 23));
        label = new QLabel(imageWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 60, 81, 16));
        lineEdit = new QLineEdit(imageWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 60, 231, 20));
        label_2 = new QLabel(imageWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 91, 16));
        label_5 = new QLabel(imageWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 110, 47, 21));
        label_6 = new QLabel(imageWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(270, 140, 47, 21));
        layoutWidget = new QWidget(imageWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 110, 131, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setCursor(QCursor(Qt::ArrowCursor));
        spinBox->setMaximum(10000);

        horizontalLayout->addWidget(spinBox);

        layoutWidget1 = new QWidget(imageWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 140, 131, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        spinBox_2 = new QSpinBox(layoutWidget1);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(10000);

        horizontalLayout_2->addWidget(spinBox_2);

        label_7 = new QLabel(imageWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 10, 351, 31));

        retranslateUi(imageWindow);

        QMetaObject::connectSlotsByName(imageWindow);
    } // setupUi

    void retranslateUi(QDialog *imageWindow)
    {
        imageWindow->setWindowTitle(QApplication::translate("imageWindow", "Dialog", nullptr));
        saveButton->setText(QApplication::translate("imageWindow", "Save", nullptr));
        label->setText(QApplication::translate("imageWindow", "Image Address:", nullptr));
        label_2->setText(QApplication::translate("imageWindow", "Image Dimension:", nullptr));
        label_5->setText(QApplication::translate("imageWindow", "px", nullptr));
        label_6->setText(QApplication::translate("imageWindow", "px", nullptr));
        label_3->setText(QApplication::translate("imageWindow", "Height:", nullptr));
        label_4->setText(QApplication::translate("imageWindow", "Width:", nullptr));
        label_7->setText(QApplication::translate("imageWindow", "Please insert a proper image address otherwise image would'nt appear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class imageWindow: public Ui_imageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEWINDOW_H
