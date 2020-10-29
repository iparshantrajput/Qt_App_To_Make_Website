#include "linkwindow.h"
#include "ui_linkwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include "link.h"
linkWindow::linkWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::linkWindow)
{
    ui->setupUi(this);
}

linkWindow::~linkWindow()
{
    delete ui;
}

void linkWindow::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
        QMessageBox::warning(this,"Error while saving","Please enter a link first");
    else if(ui->lineEdit_2->text().isEmpty())
        QMessageBox::warning(this,"Error while saving","Please enter a link name first");
    else {
        html *h = new link();
        QString linkAddress = ui->lineEdit->text();
        QString linkName = ui->lineEdit_2->text();
        h->setLink(linkAddress,linkName);
        hide();
        QMessageBox::information(this,"Link Saved","Your link with name saved successfully");
    }
}
