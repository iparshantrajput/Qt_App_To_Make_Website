#include "headingwindow.h"
#include "ui_headingwindow.h"
#include "heading.h"
#include <QMessageBox>
#include <QDialog>
#include <QColorDialog>
#include <QColor>
headingWindow::headingWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::headingWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Enter your heading here..");
}

headingWindow::~headingWindow()
{
    delete ui;
}

void headingWindow::on_saveButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
        QMessageBox::warning(this,"Error while saving","Please enter a heading first");
    //if(!(ui->radioButton->isChecked()) && !(ui->radioButton_2->isChecked()) && !(ui->radioButton_3->isChecked()) && !(ui->radioButton_4->isChecked()) && !(ui->radioButton_5->isChecked()) && !(ui->radioButton_6->isChecked()))
        //QMessageBox::warning(this,"Error while saving","Please select size of heading");
    //if(!(ui->radioButton_7->isChecked()) && !(ui->radioButton_8->isChecked()) && !(ui->radioButton_9->isChecked()) && !(ui->radioButton_10->isChecked()) && !(ui->radioButton_11->isChecked()) && !(ui->radioButton_12->isChecked()))
      //  QMessageBox::warning(this,"Error while saving","Please select color of heading");
    else{
        html *h = new heading();

        if(ui->radioButton->isChecked()){
            h->setHeadingSize("h1");
        }
        else if(ui->radioButton_2->isChecked()){
            h->setHeadingSize("h2");
        }
        else if(ui->radioButton_3->isChecked()){
            h->setHeadingSize("h3");
        }
        else if(ui->radioButton_4->isChecked()){
            h->setHeadingSize("h4");
        }
        else if(ui->radioButton_5->isChecked()){
            h->setHeadingSize("h5");
        }
        else if(ui->radioButton_6->isChecked()){
            h->setHeadingSize("h6");
        }
        if(ui->checkBox->isChecked()){
            QColor color = on_checkBoxChecked();
            QString headingColor = "style=\"color:"+QVariant(color).toString()+";\"";
            h->setHeadingColor(headingColor);
        }
        else if(ui->radioButton_7->isChecked()){
            QString headingColor = "style=\"color:green;\"";
            h->setHeadingColor(headingColor);
        }
        else if(ui->radioButton_8->isChecked()){
            QString headingColor = "style=\"color:red;\"";
            h->setHeadingColor(headingColor);
        }
        else if(ui->radioButton_9->isChecked()){
            QString headingColor = "style=\"color:yellow;\"";
            h->setHeadingColor(headingColor);
        }
        else if(ui->radioButton_10->isChecked()){
            QString headingColor = "style=\"color:blue;\"";
            h->setHeadingColor(headingColor);
        }
        else if(ui->radioButton_11->isChecked()){
            QString headingColor = "style=\"color:black;\"";
            h->setHeadingColor(headingColor);
        }
        else if(ui->radioButton_12->isChecked()){
            QString headingColor = "style=\"color:purple;\"";
            h->setHeadingColor(headingColor);
        }
        QString head = ui->lineEdit->text();
        h->setHeading(head);
        hide();
        QMessageBox::information(this,"Heading saved","Your heading saved successfully");
    }
}


QColor headingWindow::on_checkBoxChecked()
{
        QColor headingColor = QColorDialog::getColor();

        return headingColor;
}
