#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Qt includes.
#include <QMainWindow>
#include "QFileDialog"
#include <QTimer>
#include "QMessageBox"
#include "QTextStream"

// Std c++ includes.
#include <iostream>
#include <thread>
#include <atomic>
#include <string>
#include <chrono>
#include <vector>

// Make conversion's easy:
#define toRadians M_PI/180.0
#define toDegrees (180.0/M_PI)

//#ifdef Success
//#undef Success
//#endif

// Opencascade occ.
#include "draw_primitives.h"
#include "draw_clothoids.h"
#include "draw_rs274ngc_shapes.h"
#include "OcctQtViewer.h"

// Scurve planner primitive struct.
#include "../../vendor/scurve/scurve_engine/tp_scurve.h"

// Opencascade occ widget overlay, ensure it's a created from qt->add_new->dialog_gui_class->widget.
#include "form.h"

// Qt widget, gcode editor.
#include "QGCodeEditor.h"

// Linuxcnc hal, hardware abstract layer.
#include "hal.h"

// File open dialog.
#include "qt_functions.h"
#include "std_functions.h"
#include "gcode_parser.h"

// Interpreter
#include "rs274ngc_intf.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void update();
    void hal_connection();
    void helix();

private slots:

    void on_toolButton_fit_all_pressed();

    void on_toolButton_view_front_pressed();

    void on_toolButton_view_back_pressed();

    void on_toolButton_view_top_pressed();

    void on_toolButton_view_bottom_pressed();

    void on_toolButton_view_left_pressed();

    void on_toolButton_view_right_pressed();

    void on_toolButton_view_3d_pressed();

    void on_toolButton_zoom_min_pressed();

    void on_toolButton_zoom_plus_pressed();

    void on_toolButton_file_open_pressed();

    void on_pushButton_open_pressed();

    void on_pushButton_pressed();

private:
    Ui::MainWindow *ui;

    QTimer *timer = new QTimer(this);

    OcctQtViewer *occ;

    Form *form = new Form();

    QGCodeEditor *editor;
};
#endif
