#ifndef PARAGRAPHWINDOW_H
#define PARAGRAPHWINDOW_H

#include <QDialog>

namespace Ui {
class paragraphWindow;
}

class paragraphWindow : public QDialog
{
    Q_OBJECT

public:
    explicit paragraphWindow(QWidget *parent = nullptr);
    ~paragraphWindow();
    QColor on_checkBoxChecked();

private slots:
    void on_save_clicked();

private:
    Ui::paragraphWindow *ui;
};

#endif // PARAGRAPHWINDOW_H
