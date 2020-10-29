#ifndef LINKWINDOW_H
#define LINKWINDOW_H

#include <QDialog>

namespace Ui {
class linkWindow;
}

class linkWindow : public QDialog
{
    Q_OBJECT

public:
    explicit linkWindow(QWidget *parent = 0);
    ~linkWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::linkWindow *ui;
};

#endif // LINKWINDOW_H
