#ifndef FORM_DRO_H
#define FORM_DRO_H

#include <QDialog>

namespace Ui {
class form_dro;
}

class form_dro : public QDialog
{
    Q_OBJECT

public:
    explicit form_dro(QWidget *parent = nullptr);
    ~form_dro();

    void update_dro(double *dro, double *dro_dtg, double vel, int *homed);

private:
    Ui::form_dro *ui;
};

#endif // FORM_DRO_H
