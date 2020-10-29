#include "listwindow.h"
#include "ui_listwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include "list.h"

listwindow::listwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listwindow)
{
    ui->setupUi(this);
}

listwindow::~listwindow()
{
    delete ui;
}

void listwindow::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3->text().isEmpty() || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty())
        QMessageBox::warning(this,"Error while saving","Please input all items names in order to procede.");
    else
    {
        html *h = new list();
        QString item1 = ui->lineEdit->text();
        QString item2 = ui->lineEdit_2->text();
        QString item3 = ui->lineEdit_3->text();
        QString item4 = ui->lineEdit_4->text();
        QString item5 = ui->lineEdit_5->text();
        if(ui->radioButton->isChecked())
        {
            h->setListStyle("ul");
            h->setListProperty("style=\"list-style-type:disc;\"");
        }
        else if(ui->radioButton_2->isChecked())
        {
             h->setListStyle("ul");
             h->setListProperty("style=\"list-style-type:square;\"");
        }
        else if(ui->radioButton_3->isChecked())
        {
             h->setListStyle("ol");
             h->setListProperty("type=\"1\"");
        }
        else if(ui->radioButton_4->isChecked())
        {
             h->setListStyle("ol");
             h->setListProperty("type=\"i\"");
        }
        else
        {
            h->setListStyle("ul");
            h->setListProperty("style=\"list-style-type:disc;\"");
        }
        h->setList(item1,item2,item3,item4,item5);
        hide();
        QMessageBox::information(this,"List Saved","Your list saved successfully");
    }
}
