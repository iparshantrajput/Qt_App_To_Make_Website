#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "titlewindow.h"
#include "headingwindow.h"
#include "paragraphwindow.h"
#include "imagewindow.h"
#include "backgroundimagewindow.h"
#include "linkwindow.h"
#include "listwindow.h"
#include "formwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nextButton_clicked()
{
    if(ui->titleBox->isChecked()){
        titleWindow tw;
        tw.setModal(true);
        tw.exec();
    }
    if(ui->headingBox->isChecked()){
        headingWindow hw;
        hw.setModal(true);
        hw.exec();
    }
    if(ui->paragraphBox->isChecked()){
        paragraphWindow p;
        p.setModal(true);
        p.exec();
    }
    if(ui->imageBox->isChecked()){
        backGroundImageWindow bg;
        bg.setModal(true);
        bg.exec();
    }
    if(ui->linkBox->isChecked()){
            linkWindow l;
            l.setModal(true);
            l.exec();
        }
        if(ui->listBox->isChecked()){
            listwindow j;
            j.setModal(true);
            j.exec();
        }
        if(ui->formBox->isChecked()){
            formwindow f;
            f.setModal(true);
            f.exec();
        }
}
