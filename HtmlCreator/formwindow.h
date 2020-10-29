#ifndef FORMWINDOW_H
#define FORMWINDOW_H

#include <QDialog>

namespace Ui {
class formwindow;
}

class formwindow : public QDialog
{
    Q_OBJECT

public:
    explicit formwindow(QWidget *parent = 0);
    ~formwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::formwindow *ui;
};

#endif // FORMWINDOW_H
