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

// Scurve motion.
#include "scurve_engine.h"

// Opencascade occ widget overlay, ensure it's a created from qt->add_new->dialog_gui_class->widget.
#include "form_dro.h"

// Qt widget, gcode editor.
#include "QGCodeEditor.h"

// Linuxcnc hal, hardware abstract layer.
#include "hal_functions.h"

// File open dialog.
#include "qt_functions.h"
#include "std_functions.h"
#include "gcode_parser.h"

// Shared memory
#include "state_machine_shm.h"

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

    void on_toolButton_ortho_pressed();

    void on_toolButton_open_pressed();

    void on_toolButton_reload_pressed();

    void on_toolButton_view_ortho_toggled(bool checked);

    void on_toolButton_manual_pressed();

    void on_toolButton_auto_pressed();

    void on_toolButton_mdi_pressed();

    void on_toolButton_settings_toggled(bool checked);

    void on_toolButton_run_pressed();

    void on_toolButton_stop_pressed();

    void on_toolButton_edit_pressed();

    void on_toolButton_text_edit_home_pressed();

    void on_toolButton_textedit_save_as_pressed();

    void on_toolButton_textedit_save_pressed();

    void on_toolButton_remove_line_nrs_pressed();

    void on_toolButton_to_capital_letters_pressed();

    void on_toolButton_to_lower_letters_pressed();

    void on_toolButton_test_pressed();

    void on_toolButton_jog_x_min_pressed();

    void on_toolButton_jog_x_plus_pressed();

    void on_toolButton_jog_y_min_pressed();

    void on_toolButton_jog_y_plus_pressed();

    void on_toolButton_jog_z_min_pressed();

    void on_toolButton_jog_z_plus_pressed();

    void on_toolButton_jog_x_min_released();

    void on_toolButton_jog_x_plus_released();

    void on_toolButton_jog_y_min_released();

    void on_toolButton_jog_y_plus_released();

    void on_toolButton_jog_z_min_released();

    void on_toolButton_jog_z_plus_released();

    void on_toolButton_jog_step_toggled(bool checked);

private:
    Ui::MainWindow *ui;

    QTimer *timer = new QTimer(this);

    OcctQtViewer *occ;

    form_dro *dro = new form_dro();

    hal_functions *hal = new hal_functions();

    QGCodeEditor *editor;

    state_machine_shm *shm = new state_machine_shm();
    shared_mem_data shm_data;
};
#endif
