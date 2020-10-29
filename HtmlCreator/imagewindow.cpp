#include "imagewindow.h"
#include "ui_imagewindow.h"
#include <QMessageBox>
#include <QPixmap>
#include "image.h"

imageWindow::imageWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::imageWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Enter image URL e.g(D:/BSCS/DSU/2nd SEMESTER/OOP Lab/Project/Project/htmlFiles/home.html)");
}

imageWindow::~imageWindow()
{
    delete ui;
}

void imageWindow::on_saveButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
        QMessageBox::warning(this,"Error while saving","Please enter a image URL first");
    if(ui->spinBox->value() == 0)
        QMessageBox::warning(this,"Error while saving","Please set image height");
    if(ui->spinBox_2->value() == 0)
        QMessageBox::warning(this,"Error while saving","Please set image width");
    else {
        html *h = new image();
        QString imageAddress = ui->lineEdit->text();
        int imageHeight = ui->spinBox->value();
        int imageWidth = ui->spinBox_2->value();
        h->setImage(imageAddress,imageWidth,imageHeight);
        hide();
        QMessageBox::information(this,"Image Saved","Your image saved successfully");
    }
}
