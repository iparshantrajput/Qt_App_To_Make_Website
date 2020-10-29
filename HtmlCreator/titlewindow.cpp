#include "titlewindow.h"
#include "ui_titlewindow.h"

titleWindow::titleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::titleWindow)
{
    ui->setupUi(this);
    ui->title->setPlaceholderText("Enter your title here..");
}

titleWindow::~titleWindow()
{
    delete ui;
}

void titleWindow::on_nextButton_clicked()
{
    if(ui->title->text().isEmpty())
        QMessageBox::warning(this,"Error","Please enter title first");
    else{
        QString titleOfWebsite = ui->title->text();
        html *h = new title();
        h->setTitle(titleOfWebsite);
        hide();
        QMessageBox::information(this,"Title","Title has been added successfully");
    }
}
