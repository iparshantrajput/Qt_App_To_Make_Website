#ifndef LISTWINDOW_H
#define LISTWINDOW_H

#include <QDialog>

namespace Ui {
class listwindow;
}

class listwindow : public QDialog
{
    Q_OBJECT

public:
    explicit listwindow(QWidget *parent = 0);
    ~listwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::listwindow *ui;
};

#endif // LISTWINDOW_H
