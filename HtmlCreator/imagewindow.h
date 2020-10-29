#ifndef IMAGEWINDOW_H
#define IMAGEWINDOW_H

#include <QDialog>

namespace Ui {
class imageWindow;
}

class imageWindow : public QDialog
{
    Q_OBJECT

public:
    explicit imageWindow(QWidget *parent = nullptr);
    ~imageWindow();

private slots:
    void on_saveButton_clicked();

private:
    Ui::imageWindow *ui;
};

#endif // IMAGEWINDOW_H
