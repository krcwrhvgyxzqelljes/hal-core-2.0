#include "form_settings.h"
#include "ui_form_settings.h"

form_settings::form_settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_settings)
{
    ui->setupUi(this);
}

form_settings::~form_settings()
{
    delete ui;
}

void form_settings::on_toolButton_save_pressed()
{

}

