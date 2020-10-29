/********************************************************************************
** Form generated from reading UI file 'titlewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEWINDOW_H
#define UI_TITLEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_titleWindow
{
public:
    QLineEdit *title;
    QLabel *label;
    QPushButton *nextButton;

    void setupUi(QDialog *titleWindow)
    {
        if (titleWindow->objectName().isEmpty())
            titleWindow->setObjectName(QString::fromUtf8("titleWindow"));
        titleWindow->resize(429, 172);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Images/html-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        titleWindow->setWindowIcon(icon);
        title = new QLineEdit(titleWindow);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(120, 60, 271, 20));
        label = new QLabel(titleWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 60, 81, 20));
        nextButton = new QPushButton(titleWindow);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(320, 130, 75, 23));

        retranslateUi(titleWindow);

        QMetaObject::connectSlotsByName(titleWindow);
    } // setupUi

    void retranslateUi(QDialog *titleWindow)
    {
        titleWindow->setWindowTitle(QApplication::translate("titleWindow", "Enter Website's Title", nullptr));
        label->setText(QApplication::translate("titleWindow", "Website's Title", nullptr));
        nextButton->setText(QApplication::translate("titleWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class titleWindow: public Ui_titleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEWINDOW_H
