#include "paragraphwindow.h"
#include "ui_paragraphwindow.h"
#include <QDialog>
#include <QMessageBox>
#include "paragraph.h"
#include <QColorDialog>
#include <QColor>

paragraphWindow::paragraphWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paragraphWindow)
{
    ui->setupUi(this);
    ui->textEdit->setPlaceholderText("Enter your paragraph here..");
}

paragraphWindow::~paragraphWindow()
{
    delete ui;
}

void paragraphWindow::on_save_clicked()
{
      if(ui->textEdit->toPlainText().isEmpty())
        QMessageBox::warning(this,"Error while saving","Please input a paragraph first");
      //if(!(ui->radioButton->isChecked()) && !(ui->radioButton_2->isChecked()))
      else{
          html *h = new paragraph();

          if(ui->checkBox->isChecked())
              h->setParagraphBold("b>");
          if(ui->checkBox_2->isChecked())
              h->setParagraphItalic("i>");
          if(ui->colorButton->isChecked()){
              QColor color = on_checkBoxChecked();
              QString paragraphColor = "style=\"color:" + QVariant(color).toString() + ";\"";
              h->setParagraphColor(paragraphColor);
          }
          else if(ui->radioButton_3->isChecked())
              h->setParagraphColor("style=\"color:red;\"");
          else if(ui->radioButton_4->isChecked())
              h->setParagraphColor("style=\"color:blue;\"");
          else if(ui->radioButton_5->isChecked())
              h->setParagraphColor("style=\"color:yellow;\"");
          else if(ui->radioButton_6->isChecked())
              h->setParagraphColor("style=\"color:black;\"");
          else if(ui->radioButton_7->isChecked())
              h->setParagraphColor("style=\"color:purple;\"");
          else if(ui->radioButton_8->isChecked())
              h->setParagraphColor("style=\"color:green;\"");
          else
              h->setParagraphColor("style=\"color:black;\"");
          QString para = ui->textEdit->toPlainText();
          h->setParagraph(para);
          hide();
          QMessageBox::information(this,"Paragraph Saved","Your paragraph saved successfully");
      }
}
QColor paragraphWindow::on_checkBoxChecked()
{
        QColor paragraphColor = QColorDialog::getColor();

        return paragraphColor;
}
