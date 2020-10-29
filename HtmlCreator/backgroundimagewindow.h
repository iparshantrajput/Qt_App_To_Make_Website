#ifndef BACKGROUNDIMAGEWINDOW_H
#define BACKGROUNDIMAGEWINDOW_H

#include <QDialog>

namespace Ui {
class backGroundImageWindow;
}

class backGroundImageWindow : public QDialog
{
    Q_OBJECT

public:
    explicit backGroundImageWindow(QWidget *parent = nullptr);
    ~backGroundImageWindow();
    QColor on_selectColor();

private slots:
    void on_pushButton_clicked();

private:
    Ui::backGroundImageWindow *ui;
};

#endif // BACKGROUNDIMAGEWINDOW_H
