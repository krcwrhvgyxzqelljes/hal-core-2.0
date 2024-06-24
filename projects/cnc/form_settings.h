#ifndef FORM_SETTINGS_H
#define FORM_SETTINGS_H

#include <QDialog>

namespace Ui {
class form_settings;
}

class form_settings : public QDialog
{
    Q_OBJECT

public:
    explicit form_settings(QWidget *parent = nullptr);
    ~form_settings();

private slots:
    void on_toolButton_save_pressed();

private:
    Ui::form_settings *ui;
};

#endif // FORM_SETTINGS_H
