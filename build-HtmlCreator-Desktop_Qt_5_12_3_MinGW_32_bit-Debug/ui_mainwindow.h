/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *nextButton;
    QLabel *label;
    QCheckBox *titleBox;
    QCheckBox *headingBox;
    QCheckBox *paragraphBox;
    QCheckBox *imageBox;
    QCheckBox *linkBox;
    QCheckBox *listBox;
    QCheckBox *formBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(741, 529);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/html-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(8000000.000000000000000);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8("<color name=\"black\">#00000000</color>"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(620, 470, 75, 23));
        nextButton->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 231, 16));
        titleBox = new QCheckBox(centralWidget);
        titleBox->setObjectName(QString::fromUtf8("titleBox"));
        titleBox->setGeometry(QRect(60, 80, 70, 17));
        headingBox = new QCheckBox(centralWidget);
        headingBox->setObjectName(QString::fromUtf8("headingBox"));
        headingBox->setGeometry(QRect(60, 130, 70, 17));
        paragraphBox = new QCheckBox(centralWidget);
        paragraphBox->setObjectName(QString::fromUtf8("paragraphBox"));
        paragraphBox->setGeometry(QRect(60, 180, 81, 17));
        imageBox = new QCheckBox(centralWidget);
        imageBox->setObjectName(QString::fromUtf8("imageBox"));
        imageBox->setGeometry(QRect(60, 230, 70, 17));
        linkBox = new QCheckBox(centralWidget);
        linkBox->setObjectName(QString::fromUtf8("linkBox"));
        linkBox->setGeometry(QRect(60, 280, 70, 17));
        listBox = new QCheckBox(centralWidget);
        listBox->setObjectName(QString::fromUtf8("listBox"));
        listBox->setGeometry(QRect(60, 330, 70, 17));
        formBox = new QCheckBox(centralWidget);
        formBox->setObjectName(QString::fromUtf8("formBox"));
        formBox->setGeometry(QRect(60, 380, 70, 17));
        formBox->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "HtmlCreator", nullptr));
        nextButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        label->setText(QApplication::translate("MainWindow", "Mark properties you want in your website", nullptr));
        titleBox->setText(QApplication::translate("MainWindow", "Title", nullptr));
        headingBox->setText(QApplication::translate("MainWindow", "Headings", nullptr));
        paragraphBox->setText(QApplication::translate("MainWindow", "Paragraphs", nullptr));
        imageBox->setText(QApplication::translate("MainWindow", "Images", nullptr));
        linkBox->setText(QApplication::translate("MainWindow", "Links", nullptr));
        listBox->setText(QApplication::translate("MainWindow", "Lists", nullptr));
        formBox->setText(QApplication::translate("MainWindow", "Forms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
