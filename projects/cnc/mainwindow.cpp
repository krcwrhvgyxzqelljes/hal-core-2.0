#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "string"

#define DEBUG 0

#include "BRepBuilderAPI_MakeEdge.hxx"

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
    editor->setStyleSheet("background-color: rgb(75, 75, 75);");

    //! This activates a screen update when robot is moving and screen needs to be updated automaticly.
    connect(timer, &QTimer::timeout, this, &MainWindow::update);
    timer->start(50);

    hal_connection();




    // std::string file=qt_functions().open_file_dialog_get_filename(this);
    // std::string gcode= std_functions().read_file_to_string(file);

    //    std::string file="/home/user/hal-core-2.0/nc_files/nc_files_grotius/G9_test.ngc";

    //    std::string gcode= std_functions().read_file_to_string(file);

    //    editor->appendPlainText(QString::fromStdString(gcode));
    //    std::vector<gcode_line> gvec;
    //    gcode_parser().tokenize(file,gvec);

    //    for (const auto& i : gvec) {
    //        std::cout<<"newline:"<<std::endl;
    //        gcode_parser().print_line(i);
    //    }

    //    std::vector<shape> svec;
    //    gcode_parser().tokens_to_shapes(gvec,svec);
    //    for (const auto& i : svec) {
    //        occ->add_shapevec(i.aShape);
    //    }
    //    occ->redraw();


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

void MainWindow::on_toolButton_file_open_pressed()
{

}

void MainWindow::on_pushButton_open_pressed()
{
    occ->clear_shapevec();
    editor->clear();

    std::string filename=qt_functions().open_file_dialog_get_filename(this);

    QString gcode=QString::fromStdString(std_functions().read_file_to_string(filename));
    editor->appendPlainText(gcode);

    std::vector<gcode_line> gvec;
    gcode_parser().tokenize(filename,gvec,1);


    std::vector<shape> svec;
    gcode_parser().tokens_to_shapes(gvec,svec);
    for (const auto& i : svec) {
        occ->add_shapevec(i.aShape);
    }
    occ->redraw();
}



void MainWindow::on_pushButton_pressed()
{
    //    std::vector<rs274ngc_data> datavec;
    //    std::string filename=qt_functions().open_file_dialog_get_filename(this);
    //    rs274ngc_intf().load_file(filename,"out.txt",datavec);

    //    std::vector<Handle(AIS_Shape)> shapevec;
    //    draw_rs274ngc_shapes().get_shapes(datavec,shapevec);


    //    for(auto i:shapevec){
    //        occ->add_shapevec(i);
    //    }
    //    occ->redraw();

    //    editor->clear();
    //    QString gcode=QString::fromStdString(std_functions().read_file_to_string(filename));
    //    editor->appendPlainText(gcode);
}

double a=1,b=1,c=10;

void MainWindow::helix(){

    occ->clear_shapevec();

    gp_Pnt p0={0,0,0};
    double i=0;
    double j=5;
    double k=0;
    gp_Pnt p1={2,10,2};
    int plane=2; //
    int turns=0; // Turns.

   occ->add_shapevec( draw_primitives::draw_3d_point(p0));
   occ->add_shapevec( draw_primitives::draw_2d_gcode_G3_helix(p0,p1,plane,i,j,k,turns) );

}

void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    a=arg1;
    helix();
}


void MainWindow::on_doubleSpinBox_2_valueChanged(double arg1)
{
    b=arg1;
    helix();
}


void MainWindow::on_doubleSpinBox_3_valueChanged(double arg1)
{
    c=arg1;
    helix();
}

