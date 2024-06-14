#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "string"

#define DEBUG 0

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // occ = new Opencascade();
    occ = new  OcctQtViewer();

    //! Add gridlayout on top of the occ widget.
    QGridLayout *layout=new QGridLayout(occ);

    //! Add the controls into the occ gridlayout..
    layout->addWidget(form);

    ui->gridLayout_occ->addWidget(occ);
    occ->create_tp_cone();

    editor = new QGCodeEditor();
    ui->gridLayout_gcode->addWidget(editor);
    editor->setStyleSheet("background-color: rgb(255, 255, 255);\ncolor: rgb(0, 0, 0);");

    //! This activates a screen update when robot is moving and screen needs to be updated automaticly.
    connect(timer, &QTimer::timeout, this, &MainWindow::update);
    timer->start(50);

    hal_connection();

    std::remove("out.ngc");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update(){

    //! To update tp moves.
    occ->redraw();
}

void MainWindow::hal_connection(){
    // Create hal component from here.
    int comp_id = hal_init("QT_C++_Interface");
    hal_comp_name(comp_id);
    hal_malloc(200);
    // int sigml= hal_signal_new("xxx", HAL_FLOAT );
    hal_ready(comp_id);
}

int MainWindow::digits(int nr)
{
    int digits = 0;
    if (nr < 0) digits = 1; // remove this line if '-' counts as a digit
    while (nr) {
        nr /= 10;
        digits++;
    }
    return digits;
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

void MainWindow::on_toolButton_stop_pressed()
{

}

void MainWindow::on_toolButton_pause_toggled(bool checked)
{

}

void MainWindow::on_toolButton_run_pressed()
{

}

void MainWindow::on_toolButton_file_open_pressed()
{
    std::string filename=qt_functions().open_file_dialog_get_filename(this);

    // 1. Run a sub program to parse raw c c++ gcode style into normal gcode.
    std::string command;
    command+="./code_parser ";
    if(DEBUG){
        command+="--debug ";
    };
    command+=filename;
    std::system(command.c_str()); // Will create out.ngc in ~/bin*/


    // 2. Display gcode in program's textview.
    QString gcode=QString::fromStdString( std_functions().read_file_to_string("out.ngc"));
    editor->appendPlainText(gcode);

    // 3. Process gcode into memory.
    std::vector<gcode_line> gvec;
    gcode_parser().parse_to_memory("out.ngc",gvec,1);
}

void MainWindow::on_toolButton_reload_pressed()
{

}

void MainWindow::on_toolButton_machine_on_pressed()
{

}

void MainWindow::on_toolButton_emergency_pressed()
{

}

void MainWindow::on_horizontalSlider_max_velocity_sliderMoved(int position)
{

}

void MainWindow::on_horizontalSlider_max_velocity_sliderReleased()
{

}

void MainWindow::on_horizontalSlider_feed_override_sliderMoved(int position)
{

}

void MainWindow::on_horizontalSlider_feed_override_sliderReleased()
{

}

void MainWindow::on_horizontalSlider_rapid_override_sliderMoved(int position)
{

}

void MainWindow::on_horizontalSlider_rapid_override_sliderReleased()
{

}

void MainWindow::on_horizontalSlider_spindle_override_sliderMoved(int position)
{

}

void MainWindow::on_horizontalSlider_spindle_override_sliderReleased()
{

}

int MainWindow::get_jog_axis(){
    int jog_axis=0;
    if(ui->radioButton_x->isChecked()){
        jog_axis=0;
    }
    if(ui->radioButton_y->isChecked()){
        jog_axis=1;
    }
    if(ui->radioButton_z->isChecked()){
        jog_axis=2;
    }
    return jog_axis;
}

void MainWindow::on_pushButton_jog_min_pressed()
{

}

void MainWindow::on_pushButton_jog_min_released()
{

}

void MainWindow::on_pushButton_jog_plus_pressed()
{

}

void MainWindow::on_pushButton_jog_plus_released()
{

}

void MainWindow::on_checkBox_mist_clicked(bool checked)
{

}

void MainWindow::on_checkBox_flood_clicked(bool checked)
{

}

void MainWindow::on_toolButton_spindle_stop_pressed()
{

}

void MainWindow::on_toolButton_spindle_ccw_pressed()
{

}

void MainWindow::on_toolButton_spindle_cw_pressed()
{

}

void MainWindow::on_pushButton_spindle_plus_pressed()
{

}

void MainWindow::on_pushButton_spindle_min_pressed()
{

}

void MainWindow::on_toolButton_mdi_command_exec_pressed()
{

}

void MainWindow::on_tabWidget_currentChanged(int index)
{

}

void MainWindow::on_pushButton_home_all_pressed()
{

}

