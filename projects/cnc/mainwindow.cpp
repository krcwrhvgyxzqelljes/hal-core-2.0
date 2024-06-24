#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "string"

#define DEBUG 0

#include "BRepBuilderAPI_MakeEdge.hxx"

int comp_id=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // occ = new Opencascade();
    occ = new  OcctQtViewer();
    occ->set_perspective();

    //! Add gridlayout on top of the occ widget.
    QGridLayout *layout=new QGridLayout(occ);

    //! Add the controls into the occ gridlayout..
    layout->addWidget(dro);

    ui->gridLayout_occ->addWidget(occ);
    occ->create_tp_cone();

    editor = new QGCodeEditor();
    ui->gridLayout_gcode->addWidget(editor);
    editor->setStyleSheet("background-color: rgb(75, 75, 75);");

    ui->stackedWidget_toplevel->setCurrentIndex(1);

    //! This activates a screen update when robot is moving and screen needs to be updated automaticly.
    connect(timer, &QTimer::timeout, this, &MainWindow::update);
    timer->start(50);
}

MainWindow::~MainWindow()
{
    hal->exit();
    shm->detach_shared_memory();
    delete ui;
}

void MainWindow::update(){





    shm_data=shm->read_from_shared_memory();
    dro->update_dro(shm_data.pos,
                     shm_data.dtg,
                     shm_data.curvel,
                     shm_data.homed);

    hal->update();
    //! To update tp moves.
    occ->redraw();
}

void MainWindow::on_toolButton_fit_all_pressed()
{
    occ->fit_all();
}

void MainWindow::on_toolButton_view_front_pressed()
{
    occ->set_view_front();
}

void MainWindow::on_toolButton_view_back_pressed()
{
    occ->set_view_back();
}

void MainWindow::on_toolButton_view_top_pressed()
{
    occ->set_view_top();
}

void MainWindow::on_toolButton_view_bottom_pressed()
{
    occ->set_view_bottom();
}

void MainWindow::on_toolButton_view_left_pressed()
{
    occ->set_view_left();
}

void MainWindow::on_toolButton_view_right_pressed()
{
    occ->set_view_right();
}

void MainWindow::on_toolButton_view_3d_pressed()
{
    occ->set_view_3d();
}

void MainWindow::on_toolButton_zoom_min_pressed()
{
    occ->zoom_min();
}

void MainWindow::on_toolButton_zoom_plus_pressed()
{
    occ->zoom_plus();
}

void MainWindow::on_toolButton_ortho_pressed()
{
    occ->set_orthographic();
}

void MainWindow::on_toolButton_open_pressed()
{
    occ->clear_shapevec();
    editor->clear();

    std::string file_name=qt_functions().open_file_dialog_get_filename(this);

    QString gcode=QString::fromStdString(std_functions().read_file_to_string(file_name));
    editor->appendPlainText(gcode);

    std::vector<gcode_line> gvec;
    gcode_parser().tokenize(file_name,gvec,1);

    ui->label_current_file->setText(QString::fromStdString(file_name));

    std::vector<shape> svec;
    gcode_parser().tokens_to_shapes(gvec,svec);
    for (const auto& i : svec) {
        occ->add_shapevec(i.aShape);
    }
    occ->redraw();

    // Send data to hal state_machine.
    shm_data.svec=svec;
    shm->write_to_shared_memory(shm_data);
    std::cout<<"writing shapes to shared memory."<<std::endl;
}

void MainWindow::on_toolButton_reload_pressed()
{
    std::string file_name=ui->label_current_file->text().toStdString();

    if(file_name.size()>0){
        occ->clear_shapevec();
        editor->clear();

        QString gcode=QString::fromStdString(std_functions().read_file_to_string(file_name));
        editor->appendPlainText(gcode);

        std::vector<gcode_line> gvec;
        gcode_parser().tokenize(file_name,gvec,1);

        ui->label_current_file->setText(QString::fromStdString(file_name));

        std::vector<shape> svec;
        gcode_parser().tokens_to_shapes(gvec,svec);
        for (const auto& i : svec) {
            occ->add_shapevec(i.aShape);
        }
        occ->redraw();
    }
}

void MainWindow::on_toolButton_view_ortho_toggled(bool checked)
{
    if(checked){
        occ->set_orthographic();
    } else {
        occ->set_perspective();
    }
}

void MainWindow::on_toolButton_manual_pressed()
{
    ui->stackedWidget_mode_manual_auto_mdi->show();

    ui->toolButton_auto->setChecked(0);
    ui->toolButton_mdi->setChecked(0);
    ui->toolButton_settings->setChecked(0);
    ui->toolButton_manual->setDown(1);

    ui->stackedWidget_mode_manual_auto_mdi->setCurrentIndex(0);
}


void MainWindow::on_toolButton_auto_pressed()
{
    ui->stackedWidget_mode_manual_auto_mdi->show();

    ui->toolButton_auto->setDown(1);
    ui->toolButton_manual->setChecked(0);
    ui->toolButton_mdi->setChecked(0);
    ui->toolButton_settings->setChecked(0);

    ui->stackedWidget_mode_manual_auto_mdi->setCurrentIndex(1);
}


void MainWindow::on_toolButton_mdi_pressed()
{
    ui->stackedWidget_mode_manual_auto_mdi->show();

    ui->toolButton_auto->setChecked(0);
    ui->toolButton_manual->setChecked(0);
    ui->toolButton_mdi->setDown(1);
    ui->toolButton_settings->setChecked(0);

    ui->stackedWidget_mode_manual_auto_mdi->setCurrentIndex(2);
}

void MainWindow::on_toolButton_settings_toggled(bool checked)
{
    if(checked){
        ui->stackedWidget_mode_manual_auto_mdi->hide();
        ui->stackedWidget_main->setCurrentIndex(1);
    } else {
        ui->stackedWidget_mode_manual_auto_mdi->show();
        ui->stackedWidget_main->setCurrentIndex(0);
    }
}

void MainWindow::on_toolButton_run_pressed()
{
    std::string file_name=ui->label_current_file->text().toStdString();
    if(file_name.size()==0){
        qt_functions::message_box(this,2000,"no file.");
    }
    ui->toolButton_run->setDown(1);
    ui->toolButton_stop->setChecked(0);
}

void MainWindow::on_toolButton_stop_pressed()
{
    ui->toolButton_run->setChecked(0);
    ui->toolButton_stop->setDown(1);
}

void MainWindow::on_toolButton_edit_pressed()
{
    ui->stackedWidget_toplevel->setCurrentIndex(2);
    ui->plainTextEdit_gcode->setPlainText(editor->toPlainText());
}

void MainWindow::on_toolButton_text_edit_home_pressed()
{
    ui->stackedWidget_toplevel->setCurrentIndex(1);
}

void MainWindow::on_toolButton_textedit_save_as_pressed()
{
    std::string file_path=qt_functions::save_file_dialog_get_filename(this);
    std_functions::save_string_to_file(ui->plainTextEdit_gcode->toPlainText().toStdString(),file_path);
}

void MainWindow::on_toolButton_textedit_save_pressed()
{
    std::string file_name=ui->label_current_file->text().toStdString();
    std_functions::save_string_to_file(ui->plainTextEdit_gcode->toPlainText().toStdString(),file_name);
}


void MainWindow::on_toolButton_remove_line_nrs_pressed()
{
    std::string string=ui->plainTextEdit_gcode->toPlainText().toStdString();
    string=std_functions::remove_line_nummers_n_and_value(string);
    string=std_functions::remove_left_white_spaces_lines(string);
    ui->plainTextEdit_gcode->setPlainText(QString::fromStdString(string));
}

void MainWindow::on_toolButton_to_capital_letters_pressed()
{
    std::string string=ui->plainTextEdit_gcode->toPlainText().toStdString();
    string=std_functions::to_capical(string);
    ui->plainTextEdit_gcode->setPlainText(QString::fromStdString(string));
}


void MainWindow::on_toolButton_to_lower_letters_pressed()
{
    std::string string=ui->plainTextEdit_gcode->toPlainText().toStdString();
    string=std_functions::to_lower(string);
    ui->plainTextEdit_gcode->setPlainText(QString::fromStdString(string));
}

void MainWindow::on_toolButton_test_pressed()
{

}

void MainWindow::on_toolButton_jog_x_min_pressed()
{
    shm_data.jog[0]=-1;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_x_min_released()
{
    shm_data.jog[0]=0;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_x_plus_pressed()
{
    shm_data.jog[0]=1;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_x_plus_released()
{
    shm_data.jog[0]=0;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_y_min_pressed()
{
    shm_data.jog[1]=-1;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_y_min_released()
{
    shm_data.jog[1]=0;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_y_plus_pressed()
{
    shm_data.jog[1]=1;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_y_plus_released()
{
    shm_data.jog[1]=0;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_z_min_pressed()
{
    shm_data.jog[2]=-1;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_z_min_released()
{
    shm_data.jog[2]=0;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_z_plus_pressed()
{
    shm_data.jog[2]=1;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_z_plus_released()
{
    shm_data.jog[2]=0;
    shm_data.jog_velocity=ui->horizontalSlider_jog_velocity->value();
    shm->write_to_shared_memory(shm_data);
}

void MainWindow::on_toolButton_jog_step_toggled(bool checked)
{
    shm_data.jog_step=checked;
    shm_data.jog_step_size=ui->doubleSpinBox_stepsize->value();
}









