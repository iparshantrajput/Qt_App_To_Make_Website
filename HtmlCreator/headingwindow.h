#ifndef HEADINGWINDOW_H
#define HEADINGWINDOW_H

#include <QDialog>

namespace Ui {
class headingWindow;
}

class headingWindow : public QDialog
{
    Q_OBJECT

public:
    explicit headingWindow(QWidget *parent = nullptr);
    ~headingWindow();
    QColor on_checkBoxChecked();

private slots:
    void on_saveButton_clicked();

private:
    Ui::headingWindow *ui;
};

#endif // HEADINGWINDOW_H
