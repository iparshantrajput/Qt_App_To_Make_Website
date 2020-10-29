#include "backgroundimagewindow.h"
#include "ui_backgroundimagewindow.h"
#include "imagewindow.h"
#include <QColor>
#include <QColorDialog>
#include <QDialog>
#include <QMessageBox>
#include <QPixmap>
#include "image.h"

backGroundImageWindow::backGroundImageWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::backGroundImageWindow)
{
    ui->setupUi(this);
}

backGroundImageWindow::~backGroundImageWindow()
{
    delete ui;
}

void backGroundImageWindow::on_pushButton_clicked()
{
    html *h = new image();
    if(ui->radioButton->isChecked()){
        QString backgroundImg = "background=\"" + ui->lineEdit->text() + "\">";
        h->setBackgroundImage(backgroundImg);
        hide();
        QMessageBox::information(this,"Background Saved","Background settings saved successfully");
        imageWindow img;
        img.setModal(true);
        img.exec();
    }
    else if(ui->radioButton_2->isChecked()){
        QColor color = on_selectColor();
        QString backgroundImg = "style=\"background-color:" + QVariant(color).toString() + ";\"";
        h->setBackgroundImage(backgroundImg);
        hide();
        QMessageBox::information(this,"Background Saved","Background settings saved successfully");
        imageWindow img;
        img.setModal(true);
        img.exec();
    }
    else{
        QMessageBox::warning(this,"Error while procceding","Please select any field first");
    }
}
QColor backGroundImageWindow::on_selectColor(){
    QColor color = QColorDialog::getColor();

    return color;
}
