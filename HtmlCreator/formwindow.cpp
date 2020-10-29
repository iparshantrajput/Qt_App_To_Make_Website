#include "formwindow.h"
#include "ui_formwindow.h"
#include "form.h"
#include <QMessageBox>
#include <QDialog>

formwindow::formwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formwindow)
{
    ui->setupUi(this);
}

formwindow::~formwindow()
{
    delete ui;
}

void formwindow::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
        QMessageBox::warning(this,"Error while saving","Please input your form name in order to procede.");
    else if(!(ui->checkBox->isChecked()) && !(ui->checkBox_2->isChecked()) && !(ui->checkBox_3->isChecked()) && !(ui->checkBox_4->isChecked()) && !(ui->checkBox_5->isChecked()) && !(ui->checkBox_6->isChecked())&& !(ui->checkBox_7->isChecked()))
            QMessageBox::warning(this,"Error while saving","Please select atleast one option.");
    else
    {
        html *h = new form();
        QString formName = ui->lineEdit->text();
        if(ui->checkBox->isChecked())
        {
            h->setFirstName(" First Name: <input type=\"text\"><br><br>");
        }
        if(ui->checkBox_2->isChecked())
        {
             h->setLastName(" Last Name: <input type=\"text\"><br><br>");
        }
        if(ui->checkBox_4->isChecked())
        {
            h->setDateOfBirth(" Date of Birth: <input type=\"date\"><br><br>");
        }
        if(ui->checkBox_7->isChecked())
        {
             h->setGender("Gender: <input type=\"radio\" name=\"gender\" value=\"male\" checked> Male <input type=\"radio\" name=\"gender\" value=\"female\"> Female <input type=\"radio\" name=\"gender\" value=\"other\"> Other<br><br>");
        }
        if(ui->checkBox_3->isChecked())
        {
            h->setPhoneNumber("Phone Number: <input type=\"tel\" name=\"phone\" pattern=\"[0-9]{3}-[0-9]{2}-[0-9]{3}\"><br><br>");
        }
        if(ui->checkBox_6->isChecked())
        {
            h->setEmail("Email Address: <input type=\"email\"><br><br>");
        }
        if(ui->checkBox_5->isChecked())
        {
            h->setCommentBox("Comments: <textarea name=\"message\" rows=\"7\" cols=\"30\"></textarea><br><br>");
        }
        h->setForm(formName);
        hide();
        QMessageBox::information(this,"Form Saved","Your form saved successfully");
    }
}
