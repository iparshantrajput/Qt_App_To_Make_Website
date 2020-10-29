#ifndef TITLEWINDOW_H
#define TITLEWINDOW_H

#include <QDialog>
#include  <QMessageBox>
#include <title.h>
#include <QMessageBox>

namespace Ui {
class titleWindow;
}

class titleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit titleWindow(QWidget *parent = nullptr);
    ~titleWindow();

private slots:
    void on_nextButton_clicked();

private:
    Ui::titleWindow *ui;
};

#endif // TITLEWINDOW_H
