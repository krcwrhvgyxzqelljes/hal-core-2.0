/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QStackedWidget *stackedWidget_toplevel;
    QWidget *page_4;
    QWidget *page_2;
    QGridLayout *gridLayout_6;
    QSplitter *splitter_2;
    QStackedWidget *stackedWidget_index;
    QWidget *page_9;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_9;
    QToolButton *toolButton_settings;
    QSpacerItem *verticalSpacer_2;
    QToolButton *toolButton_empty_3;
    QToolButton *toolButton_manual;
    QToolButton *toolButton_auto;
    QToolButton *toolButton_empty_2;
    QToolButton *toolButton_mdi;
    QToolButton *toolButton_edit;
    QToolButton *toolButton_test;
    QWidget *page_10;
    QStackedWidget *stackedWidget_main;
    QWidget *page_occ_gcode;
    QGridLayout *gridLayout_12;
    QSplitter *splitter;
    QFrame *frame_4;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_occ;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_zoom_plus;
    QToolButton *toolButton_view_top;
    QToolButton *toolButton_view_ortho;
    QToolButton *toolButton_fit_all;
    QToolButton *toolButton_zoom_min;
    QToolButton *toolButton_view_bottom;
    QToolButton *toolButton_view_front;
    QToolButton *toolButton_view_back;
    QToolButton *toolButton_view_3d;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_view_right;
    QToolButton *toolButton_view_left;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_5;
    QGridLayout *gridLayout_17;
    QGridLayout *gridLayout_gcode;
    QGridLayout *gridLayout_8;
    QLabel *label_14;
    QLabel *label_current_file;
    QWidget *page_settings;
    QLabel *label_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_14;
    QLabel *label_7;
    QLabel *label_10;
    QLineEdit *lineEdit_max_acceleration;
    QLabel *label_8;
    QLineEdit *lineEdit_max_jerk;
    QLineEdit *lineEdit_max_velocity;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_15;
    QLabel *label_26;
    QLabel *label_22;
    QLineEdit *lineEdit_max_jerk_4;
    QLabel *label_19;
    QLineEdit *lineEdit_max_acceleration_2;
    QLineEdit *lineEdit_max_velocity_2;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_21;
    QComboBox *comboBox;
    QLabel *label_20;
    QLineEdit *lineEdit_max_jerk_2;
    QLabel *label_23;
    QLineEdit *lineEdit_max_jerk_3;
    QLabel *label_18;
    QLabel *label_9;
    QLabel *label_17;
    QStackedWidget *stackedWidget_mode_manual_auto_mdi;
    QWidget *page_manual;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_jog_settings;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_jog_velocity;
    QToolButton *toolButton_jog_step;
    QSlider *horizontalSlider_jog_velocity;
    QDoubleSpinBox *doubleSpinBox_stepsize;
    QToolButton *toolButton_jog_select_xyz_abc_uvw;
    QLabel *label_2;
    QStackedWidget *stackedWidget_3;
    QWidget *page_jog_xyz;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_jog_buttons;
    QToolButton *toolButton_jog_z_min;
    QToolButton *toolButton_jog_x_min;
    QToolButton *toolButton_jog_z_plus;
    QLabel *label_jog_dro_x;
    QToolButton *toolButton_jog_y_plus;
    QToolButton *toolButton_jog_x_plus;
    QToolButton *toolButton_jog_y_min;
    QLabel *label_jog_dro_y;
    QLabel *label_jog_dro_z;
    QSpacerItem *verticalSpacer;
    QWidget *page_6;
    QWidget *page_8;
    QGridLayout *gridLayout_3;
    QLabel *label_auto;
    QToolButton *toolButton_open;
    QToolButton *toolButton_reload;
    QToolButton *toolButton_run;
    QToolButton *toolButton_pause;
    QToolButton *toolButton_stop;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_5;
    QGridLayout *gridLayout_5;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_4;
    QWidget *editor;
    QGridLayout *gridLayout_19;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit_gcode;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *toolButton_textedit_save_as;
    QToolButton *toolButton_text_edit_home;
    QToolButton *toolButton_textedit_save;
    QFrame *frame_2;
    QGridLayout *gridLayout_21;
    QGridLayout *gridLayout_20;
    QLabel *label_13;
    QToolButton *toolButton_remove_line_nrs;
    QLabel *label_16;
    QPlainTextEdit *plainTextEdit;
    QToolButton *toolButton_to_lower_letters;
    QToolButton *toolButton_to_capital_letters;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1035, 635);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(42, 42, 42);\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setIconSize(QSize(30, 30));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        stackedWidget_toplevel = new QStackedWidget(centralwidget);
        stackedWidget_toplevel->setObjectName(QString::fromUtf8("stackedWidget_toplevel"));
        stackedWidget_toplevel->setAutoFillBackground(false);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget_toplevel->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_6 = new QGridLayout(page_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        splitter_2 = new QSplitter(page_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        stackedWidget_index = new QStackedWidget(splitter_2);
        stackedWidget_index->setObjectName(QString::fromUtf8("stackedWidget_index"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget_index->sizePolicy().hasHeightForWidth());
        stackedWidget_index->setSizePolicy(sizePolicy);
        stackedWidget_index->setMaximumSize(QSize(125, 16777215));
        stackedWidget_index->setFrameShape(QFrame::StyledPanel);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        gridLayout_16 = new QGridLayout(page_9);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        toolButton_settings = new QToolButton(page_9);
        toolButton_settings->setObjectName(QString::fromUtf8("toolButton_settings"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton_settings->sizePolicy().hasHeightForWidth());
        toolButton_settings->setSizePolicy(sizePolicy1);
        toolButton_settings->setAutoFillBackground(false);
        toolButton_settings->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pictures/btn_25_25_settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_settings->setIcon(icon);
        toolButton_settings->setIconSize(QSize(35, 35));
        toolButton_settings->setCheckable(true);
        toolButton_settings->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_settings->setAutoRaise(true);

        gridLayout_9->addWidget(toolButton_settings, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 9, 0, 1, 1);

        toolButton_empty_3 = new QToolButton(page_9);
        toolButton_empty_3->setObjectName(QString::fromUtf8("toolButton_empty_3"));
        sizePolicy1.setHeightForWidth(toolButton_empty_3->sizePolicy().hasHeightForWidth());
        toolButton_empty_3->setSizePolicy(sizePolicy1);
        toolButton_empty_3->setAutoFillBackground(false);
        toolButton_empty_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pictures/btn_25_25.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/pictures/btn_25_25_in_green.png"), QSize(), QIcon::Normal, QIcon::On);
        toolButton_empty_3->setIcon(icon1);
        toolButton_empty_3->setIconSize(QSize(35, 35));
        toolButton_empty_3->setCheckable(true);
        toolButton_empty_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_empty_3->setAutoRaise(true);

        gridLayout_9->addWidget(toolButton_empty_3, 7, 0, 1, 1);

        toolButton_manual = new QToolButton(page_9);
        toolButton_manual->setObjectName(QString::fromUtf8("toolButton_manual"));
        sizePolicy1.setHeightForWidth(toolButton_manual->sizePolicy().hasHeightForWidth());
        toolButton_manual->setSizePolicy(sizePolicy1);
        toolButton_manual->setAutoFillBackground(false);
        toolButton_manual->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_manual->setIcon(icon1);
        toolButton_manual->setIconSize(QSize(35, 35));
        toolButton_manual->setCheckable(true);
        toolButton_manual->setChecked(true);
        toolButton_manual->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_manual->setAutoRaise(true);

        gridLayout_9->addWidget(toolButton_manual, 0, 0, 1, 1);

        toolButton_auto = new QToolButton(page_9);
        toolButton_auto->setObjectName(QString::fromUtf8("toolButton_auto"));
        sizePolicy1.setHeightForWidth(toolButton_auto->sizePolicy().hasHeightForWidth());
        toolButton_auto->setSizePolicy(sizePolicy1);
        toolButton_auto->setAutoFillBackground(false);
        toolButton_auto->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_auto->setIcon(icon1);
        toolButton_auto->setIconSize(QSize(35, 35));
        toolButton_auto->setCheckable(true);
        toolButton_auto->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_auto->setAutoRaise(true);

        gridLayout_9->addWidget(toolButton_auto, 1, 0, 1, 1);

        toolButton_empty_2 = new QToolButton(page_9);
        toolButton_empty_2->setObjectName(QString::fromUtf8("toolButton_empty_2"));
        sizePolicy1.setHeightForWidth(toolButton_empty_2->sizePolicy().hasHeightForWidth());
        toolButton_empty_2->setSizePolicy(sizePolicy1);
        toolButton_empty_2->setAutoFillBackground(false);
        toolButton_empty_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_empty_2->setIcon(icon1);
        toolButton_empty_2->setIconSize(QSize(35, 35));
        toolButton_empty_2->setCheckable(true);
        toolButton_empty_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_empty_2->setAutoRaise(true);

        gridLayout_9->addWidget(toolButton_empty_2, 6, 0, 1, 1);

        toolButton_mdi = new QToolButton(page_9);
        toolButton_mdi->setObjectName(QString::fromUtf8("toolButton_mdi"));
        sizePolicy1.setHeightForWidth(toolButton_mdi->sizePolicy().hasHeightForWidth());
        toolButton_mdi->setSizePolicy(sizePolicy1);
        toolButton_mdi->setAutoFillBackground(false);
        toolButton_mdi->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_mdi->setIcon(icon1);
        toolButton_mdi->setIconSize(QSize(35, 35));
        toolButton_mdi->setCheckable(true);
        toolButton_mdi->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_mdi->setAutoRaise(true);

        gridLayout_9->addWidget(toolButton_mdi, 2, 0, 1, 1);

        toolButton_edit = new QToolButton(page_9);
        toolButton_edit->setObjectName(QString::fromUtf8("toolButton_edit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pictures/btn_25_25_text_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_edit->setIcon(icon2);
        toolButton_edit->setIconSize(QSize(35, 35));
        toolButton_edit->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_edit->setAutoRaise(true);

        gridLayout_9->addWidget(toolButton_edit, 8, 0, 1, 1);

        toolButton_test = new QToolButton(page_9);
        toolButton_test->setObjectName(QString::fromUtf8("toolButton_test"));
        sizePolicy1.setHeightForWidth(toolButton_test->sizePolicy().hasHeightForWidth());
        toolButton_test->setSizePolicy(sizePolicy1);
        toolButton_test->setAutoFillBackground(false);
        toolButton_test->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_test->setIcon(icon1);
        toolButton_test->setIconSize(QSize(35, 35));
        toolButton_test->setCheckable(true);
        toolButton_test->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_test->setAutoRaise(true);

        gridLayout_9->addWidget(toolButton_test, 5, 0, 1, 1);


        gridLayout_16->addLayout(gridLayout_9, 0, 0, 1, 1);

        stackedWidget_index->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        stackedWidget_index->addWidget(page_10);
        splitter_2->addWidget(stackedWidget_index);
        stackedWidget_main = new QStackedWidget(splitter_2);
        stackedWidget_main->setObjectName(QString::fromUtf8("stackedWidget_main"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget_main->sizePolicy().hasHeightForWidth());
        stackedWidget_main->setSizePolicy(sizePolicy2);
        stackedWidget_main->setFrameShape(QFrame::StyledPanel);
        stackedWidget_main->setFrameShadow(QFrame::Plain);
        page_occ_gcode = new QWidget();
        page_occ_gcode->setObjectName(QString::fromUtf8("page_occ_gcode"));
        gridLayout_12 = new QGridLayout(page_occ_gcode);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        splitter = new QSplitter(page_occ_gcode);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frame_4 = new QFrame(splitter);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy3);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(frame_4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_occ = new QGridLayout();
        gridLayout_occ->setObjectName(QString::fromUtf8("gridLayout_occ"));

        gridLayout_11->addLayout(gridLayout_occ, 2, 0, 1, 2);

        frame = new QFrame(frame_4);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(16777215, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        toolButton_zoom_plus = new QToolButton(frame);
        toolButton_zoom_plus->setObjectName(QString::fromUtf8("toolButton_zoom_plus"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pictures/btn_25_25_zoom_plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_zoom_plus->setIcon(icon3);
        toolButton_zoom_plus->setIconSize(QSize(35, 35));
        toolButton_zoom_plus->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_zoom_plus, 0, 2, 1, 1);

        toolButton_view_top = new QToolButton(frame);
        toolButton_view_top->setObjectName(QString::fromUtf8("toolButton_view_top"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pictures/btn_25_25_view_top.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_top->setIcon(icon4);
        toolButton_view_top->setIconSize(QSize(35, 35));
        toolButton_view_top->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_view_top, 0, 6, 1, 1);

        toolButton_view_ortho = new QToolButton(frame);
        toolButton_view_ortho->setObjectName(QString::fromUtf8("toolButton_view_ortho"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(toolButton_view_ortho->sizePolicy().hasHeightForWidth());
        toolButton_view_ortho->setSizePolicy(sizePolicy5);
        toolButton_view_ortho->setIcon(icon1);
        toolButton_view_ortho->setIconSize(QSize(35, 35));
        toolButton_view_ortho->setCheckable(true);
        toolButton_view_ortho->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_view_ortho->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_view_ortho, 0, 11, 1, 1);

        toolButton_fit_all = new QToolButton(frame);
        toolButton_fit_all->setObjectName(QString::fromUtf8("toolButton_fit_all"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pictures/btn_25_25_zoom_extends.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_fit_all->setIcon(icon5);
        toolButton_fit_all->setIconSize(QSize(35, 35));
        toolButton_fit_all->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_fit_all, 0, 3, 1, 1);

        toolButton_zoom_min = new QToolButton(frame);
        toolButton_zoom_min->setObjectName(QString::fromUtf8("toolButton_zoom_min"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/pictures/btn_25_25_zoom_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_zoom_min->setIcon(icon6);
        toolButton_zoom_min->setIconSize(QSize(35, 35));
        toolButton_zoom_min->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_zoom_min, 0, 1, 1, 1);

        toolButton_view_bottom = new QToolButton(frame);
        toolButton_view_bottom->setObjectName(QString::fromUtf8("toolButton_view_bottom"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/pictures/btn_25_25_view_bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_bottom->setIcon(icon7);
        toolButton_view_bottom->setIconSize(QSize(35, 35));
        toolButton_view_bottom->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_view_bottom, 0, 7, 1, 1);

        toolButton_view_front = new QToolButton(frame);
        toolButton_view_front->setObjectName(QString::fromUtf8("toolButton_view_front"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/pictures/btn_25_25_view_front.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_front->setIcon(icon8);
        toolButton_view_front->setIconSize(QSize(35, 35));
        toolButton_view_front->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_view_front, 0, 4, 1, 1);

        toolButton_view_back = new QToolButton(frame);
        toolButton_view_back->setObjectName(QString::fromUtf8("toolButton_view_back"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/pictures/btn_25_25_view_back.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_back->setIcon(icon9);
        toolButton_view_back->setIconSize(QSize(35, 35));
        toolButton_view_back->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_view_back, 0, 5, 1, 1);

        toolButton_view_3d = new QToolButton(frame);
        toolButton_view_3d->setObjectName(QString::fromUtf8("toolButton_view_3d"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/pictures/btn_25_25_view_3d.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_3d->setIcon(icon10);
        toolButton_view_3d->setIconSize(QSize(35, 35));
        toolButton_view_3d->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_view_3d, 0, 10, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 12, 1, 1);

        toolButton_view_right = new QToolButton(frame);
        toolButton_view_right->setObjectName(QString::fromUtf8("toolButton_view_right"));
        toolButton_view_right->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/pictures/btn_25_25_view_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_right->setIcon(icon11);
        toolButton_view_right->setIconSize(QSize(35, 35));
        toolButton_view_right->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_view_right, 0, 9, 1, 1);

        toolButton_view_left = new QToolButton(frame);
        toolButton_view_left->setObjectName(QString::fromUtf8("toolButton_view_left"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/pictures/btn_25_25_view_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_left->setIcon(icon12);
        toolButton_view_left->setIconSize(QSize(35, 35));
        toolButton_view_left->setAutoRaise(true);

        gridLayout_2->addWidget(toolButton_view_left, 0, 8, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_11->addWidget(frame, 0, 0, 1, 2);

        splitter->addWidget(frame_4);
        frame_5 = new QFrame(splitter);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        sizePolicy3.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy3);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(frame_5);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_gcode = new QGridLayout();
        gridLayout_gcode->setObjectName(QString::fromUtf8("gridLayout_gcode"));

        gridLayout_17->addLayout(gridLayout_gcode, 0, 0, 1, 1);

        splitter->addWidget(frame_5);

        gridLayout_12->addWidget(splitter, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_14 = new QLabel(page_occ_gcode);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(label_14, 1, 0, 1, 1);

        label_current_file = new QLabel(page_occ_gcode);
        label_current_file->setObjectName(QString::fromUtf8("label_current_file"));
        sizePolicy2.setHeightForWidth(label_current_file->sizePolicy().hasHeightForWidth());
        label_current_file->setSizePolicy(sizePolicy2);
        label_current_file->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_current_file, 1, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_8, 1, 0, 1, 1);

        stackedWidget_main->addWidget(page_occ_gcode);
        page_settings = new QWidget();
        page_settings->setObjectName(QString::fromUtf8("page_settings"));
        label_5 = new QLabel(page_settings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 178, 35));
        label_5->setMinimumSize(QSize(0, 35));
        QFont font;
        font.setPointSize(12);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(page_settings);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 381, 101));
        gridLayout_14 = new QGridLayout(layoutWidget);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_14->addWidget(label_7, 2, 0, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_14->addWidget(label_10, 0, 0, 1, 2);

        lineEdit_max_acceleration = new QLineEdit(layoutWidget);
        lineEdit_max_acceleration->setObjectName(QString::fromUtf8("lineEdit_max_acceleration"));

        gridLayout_14->addWidget(lineEdit_max_acceleration, 2, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_14->addWidget(label_8, 3, 0, 1, 1);

        lineEdit_max_jerk = new QLineEdit(layoutWidget);
        lineEdit_max_jerk->setObjectName(QString::fromUtf8("lineEdit_max_jerk"));

        gridLayout_14->addWidget(lineEdit_max_jerk, 3, 1, 1, 1);

        lineEdit_max_velocity = new QLineEdit(layoutWidget);
        lineEdit_max_velocity->setObjectName(QString::fromUtf8("lineEdit_max_velocity"));

        gridLayout_14->addWidget(lineEdit_max_velocity, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_14->addWidget(label_6, 1, 0, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_14->addWidget(label_11, 1, 2, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_14->addWidget(label_12, 2, 2, 1, 1);

        layoutWidget_2 = new QWidget(page_settings);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 190, 381, 211));
        gridLayout_15 = new QGridLayout(layoutWidget_2);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_15->addWidget(label_26, 1, 0, 1, 1);

        label_22 = new QLabel(layoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_15->addWidget(label_22, 6, 0, 1, 1);

        lineEdit_max_jerk_4 = new QLineEdit(layoutWidget_2);
        lineEdit_max_jerk_4->setObjectName(QString::fromUtf8("lineEdit_max_jerk_4"));

        gridLayout_15->addWidget(lineEdit_max_jerk_4, 6, 1, 1, 1);

        label_19 = new QLabel(layoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_15->addWidget(label_19, 2, 0, 1, 1);

        lineEdit_max_acceleration_2 = new QLineEdit(layoutWidget_2);
        lineEdit_max_acceleration_2->setObjectName(QString::fromUtf8("lineEdit_max_acceleration_2"));

        gridLayout_15->addWidget(lineEdit_max_acceleration_2, 3, 1, 1, 1);

        lineEdit_max_velocity_2 = new QLineEdit(layoutWidget_2);
        lineEdit_max_velocity_2->setObjectName(QString::fromUtf8("lineEdit_max_velocity_2"));

        gridLayout_15->addWidget(lineEdit_max_velocity_2, 2, 1, 1, 1);

        label_24 = new QLabel(layoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_15->addWidget(label_24, 6, 2, 1, 1);

        label_25 = new QLabel(layoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_15->addWidget(label_25, 5, 2, 1, 1);

        label_21 = new QLabel(layoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_15->addWidget(label_21, 3, 2, 1, 1);

        comboBox = new QComboBox(layoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_15->addWidget(comboBox, 1, 1, 1, 1);

        label_20 = new QLabel(layoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_15->addWidget(label_20, 2, 2, 1, 1);

        lineEdit_max_jerk_2 = new QLineEdit(layoutWidget_2);
        lineEdit_max_jerk_2->setObjectName(QString::fromUtf8("lineEdit_max_jerk_2"));

        gridLayout_15->addWidget(lineEdit_max_jerk_2, 4, 1, 1, 1);

        label_23 = new QLabel(layoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_15->addWidget(label_23, 5, 0, 1, 1);

        lineEdit_max_jerk_3 = new QLineEdit(layoutWidget_2);
        lineEdit_max_jerk_3->setObjectName(QString::fromUtf8("lineEdit_max_jerk_3"));

        gridLayout_15->addWidget(lineEdit_max_jerk_3, 5, 1, 1, 1);

        label_18 = new QLabel(layoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_15->addWidget(label_18, 4, 0, 1, 1);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_15->addWidget(label_9, 3, 0, 1, 1);

        label_17 = new QLabel(layoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(0, 35));
        label_17->setFont(font);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_15->addWidget(label_17, 0, 0, 1, 1);

        stackedWidget_main->addWidget(page_settings);
        splitter_2->addWidget(stackedWidget_main);
        stackedWidget_mode_manual_auto_mdi = new QStackedWidget(splitter_2);
        stackedWidget_mode_manual_auto_mdi->setObjectName(QString::fromUtf8("stackedWidget_mode_manual_auto_mdi"));
        sizePolicy.setHeightForWidth(stackedWidget_mode_manual_auto_mdi->sizePolicy().hasHeightForWidth());
        stackedWidget_mode_manual_auto_mdi->setSizePolicy(sizePolicy);
        stackedWidget_mode_manual_auto_mdi->setMinimumSize(QSize(200, 0));
        stackedWidget_mode_manual_auto_mdi->setMaximumSize(QSize(200, 16777215));
        stackedWidget_mode_manual_auto_mdi->setFrameShape(QFrame::StyledPanel);
        page_manual = new QWidget();
        page_manual->setObjectName(QString::fromUtf8("page_manual"));
        gridLayout_10 = new QGridLayout(page_manual);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_jog_settings = new QGridLayout();
        gridLayout_jog_settings->setObjectName(QString::fromUtf8("gridLayout_jog_settings"));
        label_4 = new QLabel(page_manual);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 35));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_jog_settings->addWidget(label_4, 0, 0, 1, 3);

        label = new QLabel(page_manual);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_jog_settings->addWidget(label, 5, 0, 1, 3);

        label_jog_velocity = new QLabel(page_manual);
        label_jog_velocity->setObjectName(QString::fromUtf8("label_jog_velocity"));
        label_jog_velocity->setFont(font);

        gridLayout_jog_settings->addWidget(label_jog_velocity, 3, 0, 1, 3);

        toolButton_jog_step = new QToolButton(page_manual);
        toolButton_jog_step->setObjectName(QString::fromUtf8("toolButton_jog_step"));
        sizePolicy1.setHeightForWidth(toolButton_jog_step->sizePolicy().hasHeightForWidth());
        toolButton_jog_step->setSizePolicy(sizePolicy1);
        toolButton_jog_step->setIcon(icon1);
        toolButton_jog_step->setIconSize(QSize(35, 35));
        toolButton_jog_step->setCheckable(true);
        toolButton_jog_step->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_jog_step->setAutoRaise(true);

        gridLayout_jog_settings->addWidget(toolButton_jog_step, 4, 0, 1, 3);

        horizontalSlider_jog_velocity = new QSlider(page_manual);
        horizontalSlider_jog_velocity->setObjectName(QString::fromUtf8("horizontalSlider_jog_velocity"));
        horizontalSlider_jog_velocity->setMaximum(100);
        horizontalSlider_jog_velocity->setValue(75);
        horizontalSlider_jog_velocity->setOrientation(Qt::Horizontal);

        gridLayout_jog_settings->addWidget(horizontalSlider_jog_velocity, 2, 0, 1, 3);

        doubleSpinBox_stepsize = new QDoubleSpinBox(page_manual);
        doubleSpinBox_stepsize->setObjectName(QString::fromUtf8("doubleSpinBox_stepsize"));
        doubleSpinBox_stepsize->setMinimumSize(QSize(0, 35));
        doubleSpinBox_stepsize->setMaximum(10000.000000000000000);
        doubleSpinBox_stepsize->setSingleStep(0.100000000000000);
        doubleSpinBox_stepsize->setValue(1.000000000000000);

        gridLayout_jog_settings->addWidget(doubleSpinBox_stepsize, 6, 0, 1, 3);

        toolButton_jog_select_xyz_abc_uvw = new QToolButton(page_manual);
        toolButton_jog_select_xyz_abc_uvw->setObjectName(QString::fromUtf8("toolButton_jog_select_xyz_abc_uvw"));
        sizePolicy1.setHeightForWidth(toolButton_jog_select_xyz_abc_uvw->sizePolicy().hasHeightForWidth());
        toolButton_jog_select_xyz_abc_uvw->setSizePolicy(sizePolicy1);
        toolButton_jog_select_xyz_abc_uvw->setIcon(icon1);
        toolButton_jog_select_xyz_abc_uvw->setIconSize(QSize(35, 35));
        toolButton_jog_select_xyz_abc_uvw->setCheckable(false);
        toolButton_jog_select_xyz_abc_uvw->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_jog_select_xyz_abc_uvw->setAutoRaise(true);

        gridLayout_jog_settings->addWidget(toolButton_jog_select_xyz_abc_uvw, 7, 0, 1, 3);

        label_2 = new QLabel(page_manual);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_jog_settings->addWidget(label_2, 1, 0, 1, 3);


        gridLayout_10->addLayout(gridLayout_jog_settings, 0, 0, 1, 1);

        stackedWidget_3 = new QStackedWidget(page_manual);
        stackedWidget_3->setObjectName(QString::fromUtf8("stackedWidget_3"));
        page_jog_xyz = new QWidget();
        page_jog_xyz->setObjectName(QString::fromUtf8("page_jog_xyz"));
        gridLayout_13 = new QGridLayout(page_jog_xyz);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_jog_buttons = new QGridLayout();
        gridLayout_jog_buttons->setObjectName(QString::fromUtf8("gridLayout_jog_buttons"));
        toolButton_jog_z_min = new QToolButton(page_jog_xyz);
        toolButton_jog_z_min->setObjectName(QString::fromUtf8("toolButton_jog_z_min"));
        sizePolicy1.setHeightForWidth(toolButton_jog_z_min->sizePolicy().hasHeightForWidth());
        toolButton_jog_z_min->setSizePolicy(sizePolicy1);
        toolButton_jog_z_min->setAutoFillBackground(false);
        toolButton_jog_z_min->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_jog_z_min->setIcon(icon1);
        toolButton_jog_z_min->setIconSize(QSize(35, 35));
        toolButton_jog_z_min->setCheckable(false);
        toolButton_jog_z_min->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_jog_z_min->setAutoRaise(true);

        gridLayout_jog_buttons->addWidget(toolButton_jog_z_min, 4, 0, 1, 1);

        toolButton_jog_x_min = new QToolButton(page_jog_xyz);
        toolButton_jog_x_min->setObjectName(QString::fromUtf8("toolButton_jog_x_min"));
        sizePolicy1.setHeightForWidth(toolButton_jog_x_min->sizePolicy().hasHeightForWidth());
        toolButton_jog_x_min->setSizePolicy(sizePolicy1);
        toolButton_jog_x_min->setAutoFillBackground(false);
        toolButton_jog_x_min->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_jog_x_min->setIcon(icon1);
        toolButton_jog_x_min->setIconSize(QSize(35, 35));
        toolButton_jog_x_min->setCheckable(false);
        toolButton_jog_x_min->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_jog_x_min->setAutoRaise(true);

        gridLayout_jog_buttons->addWidget(toolButton_jog_x_min, 0, 0, 1, 1);

        toolButton_jog_z_plus = new QToolButton(page_jog_xyz);
        toolButton_jog_z_plus->setObjectName(QString::fromUtf8("toolButton_jog_z_plus"));
        sizePolicy1.setHeightForWidth(toolButton_jog_z_plus->sizePolicy().hasHeightForWidth());
        toolButton_jog_z_plus->setSizePolicy(sizePolicy1);
        toolButton_jog_z_plus->setAutoFillBackground(false);
        toolButton_jog_z_plus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_jog_z_plus->setIcon(icon1);
        toolButton_jog_z_plus->setIconSize(QSize(35, 35));
        toolButton_jog_z_plus->setCheckable(false);
        toolButton_jog_z_plus->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_jog_z_plus->setAutoRaise(true);

        gridLayout_jog_buttons->addWidget(toolButton_jog_z_plus, 4, 1, 1, 1);

        label_jog_dro_x = new QLabel(page_jog_xyz);
        label_jog_dro_x->setObjectName(QString::fromUtf8("label_jog_dro_x"));
        sizePolicy2.setHeightForWidth(label_jog_dro_x->sizePolicy().hasHeightForWidth());
        label_jog_dro_x->setSizePolicy(sizePolicy2);
        label_jog_dro_x->setFont(font);

        gridLayout_jog_buttons->addWidget(label_jog_dro_x, 1, 0, 1, 2);

        toolButton_jog_y_plus = new QToolButton(page_jog_xyz);
        toolButton_jog_y_plus->setObjectName(QString::fromUtf8("toolButton_jog_y_plus"));
        sizePolicy1.setHeightForWidth(toolButton_jog_y_plus->sizePolicy().hasHeightForWidth());
        toolButton_jog_y_plus->setSizePolicy(sizePolicy1);
        toolButton_jog_y_plus->setAutoFillBackground(false);
        toolButton_jog_y_plus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_jog_y_plus->setIcon(icon1);
        toolButton_jog_y_plus->setIconSize(QSize(35, 35));
        toolButton_jog_y_plus->setCheckable(false);
        toolButton_jog_y_plus->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_jog_y_plus->setAutoRaise(true);

        gridLayout_jog_buttons->addWidget(toolButton_jog_y_plus, 2, 1, 1, 1);

        toolButton_jog_x_plus = new QToolButton(page_jog_xyz);
        toolButton_jog_x_plus->setObjectName(QString::fromUtf8("toolButton_jog_x_plus"));
        sizePolicy1.setHeightForWidth(toolButton_jog_x_plus->sizePolicy().hasHeightForWidth());
        toolButton_jog_x_plus->setSizePolicy(sizePolicy1);
        toolButton_jog_x_plus->setAutoFillBackground(false);
        toolButton_jog_x_plus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_jog_x_plus->setIcon(icon1);
        toolButton_jog_x_plus->setIconSize(QSize(35, 35));
        toolButton_jog_x_plus->setCheckable(false);
        toolButton_jog_x_plus->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_jog_x_plus->setAutoRaise(true);

        gridLayout_jog_buttons->addWidget(toolButton_jog_x_plus, 0, 1, 1, 1);

        toolButton_jog_y_min = new QToolButton(page_jog_xyz);
        toolButton_jog_y_min->setObjectName(QString::fromUtf8("toolButton_jog_y_min"));
        sizePolicy1.setHeightForWidth(toolButton_jog_y_min->sizePolicy().hasHeightForWidth());
        toolButton_jog_y_min->setSizePolicy(sizePolicy1);
        toolButton_jog_y_min->setAutoFillBackground(false);
        toolButton_jog_y_min->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_jog_y_min->setIcon(icon1);
        toolButton_jog_y_min->setIconSize(QSize(35, 35));
        toolButton_jog_y_min->setCheckable(false);
        toolButton_jog_y_min->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_jog_y_min->setAutoRaise(true);

        gridLayout_jog_buttons->addWidget(toolButton_jog_y_min, 2, 0, 1, 1);

        label_jog_dro_y = new QLabel(page_jog_xyz);
        label_jog_dro_y->setObjectName(QString::fromUtf8("label_jog_dro_y"));
        label_jog_dro_y->setFont(font);

        gridLayout_jog_buttons->addWidget(label_jog_dro_y, 3, 0, 1, 2);

        label_jog_dro_z = new QLabel(page_jog_xyz);
        label_jog_dro_z->setObjectName(QString::fromUtf8("label_jog_dro_z"));
        label_jog_dro_z->setFont(font);

        gridLayout_jog_buttons->addWidget(label_jog_dro_z, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_jog_buttons->addItem(verticalSpacer, 6, 0, 1, 1);


        gridLayout_13->addLayout(gridLayout_jog_buttons, 0, 0, 1, 1);

        stackedWidget_3->addWidget(page_jog_xyz);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        stackedWidget_3->addWidget(page_6);

        gridLayout_10->addWidget(stackedWidget_3, 1, 0, 1, 1);

        stackedWidget_mode_manual_auto_mdi->addWidget(page_manual);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        gridLayout_3 = new QGridLayout(page_8);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_auto = new QLabel(page_8);
        label_auto->setObjectName(QString::fromUtf8("label_auto"));
        label_auto->setMinimumSize(QSize(0, 35));
        label_auto->setFont(font);
        label_auto->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_auto, 0, 0, 1, 1);

        toolButton_open = new QToolButton(page_8);
        toolButton_open->setObjectName(QString::fromUtf8("toolButton_open"));
        sizePolicy1.setHeightForWidth(toolButton_open->sizePolicy().hasHeightForWidth());
        toolButton_open->setSizePolicy(sizePolicy1);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/pictures/btn_25_25_file_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_open->setIcon(icon13);
        toolButton_open->setIconSize(QSize(35, 35));
        toolButton_open->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_open->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_open, 1, 0, 1, 2);

        toolButton_reload = new QToolButton(page_8);
        toolButton_reload->setObjectName(QString::fromUtf8("toolButton_reload"));
        sizePolicy1.setHeightForWidth(toolButton_reload->sizePolicy().hasHeightForWidth());
        toolButton_reload->setSizePolicy(sizePolicy1);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/pictures/btn_25_25_file_refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_reload->setIcon(icon14);
        toolButton_reload->setIconSize(QSize(35, 35));
        toolButton_reload->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_reload->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_reload, 2, 0, 1, 2);

        toolButton_run = new QToolButton(page_8);
        toolButton_run->setObjectName(QString::fromUtf8("toolButton_run"));
        sizePolicy1.setHeightForWidth(toolButton_run->sizePolicy().hasHeightForWidth());
        toolButton_run->setSizePolicy(sizePolicy1);
        toolButton_run->setAutoFillBackground(false);
        toolButton_run->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        toolButton_run->setIcon(icon1);
        toolButton_run->setIconSize(QSize(35, 35));
        toolButton_run->setCheckable(true);
        toolButton_run->setChecked(false);
        toolButton_run->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_run->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_run, 3, 0, 1, 1);

        toolButton_pause = new QToolButton(page_8);
        toolButton_pause->setObjectName(QString::fromUtf8("toolButton_pause"));
        sizePolicy1.setHeightForWidth(toolButton_pause->sizePolicy().hasHeightForWidth());
        toolButton_pause->setSizePolicy(sizePolicy1);
        toolButton_pause->setAutoFillBackground(false);
        toolButton_pause->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/pictures/btn_25_25.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon15.addFile(QString::fromUtf8(":/pictures/btn_25_25_in_orange.png"), QSize(), QIcon::Normal, QIcon::On);
        toolButton_pause->setIcon(icon15);
        toolButton_pause->setIconSize(QSize(35, 35));
        toolButton_pause->setCheckable(true);
        toolButton_pause->setChecked(false);
        toolButton_pause->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_pause->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_pause, 4, 0, 1, 2);

        toolButton_stop = new QToolButton(page_8);
        toolButton_stop->setObjectName(QString::fromUtf8("toolButton_stop"));
        sizePolicy1.setHeightForWidth(toolButton_stop->sizePolicy().hasHeightForWidth());
        toolButton_stop->setSizePolicy(sizePolicy1);
        toolButton_stop->setAutoFillBackground(false);
        toolButton_stop->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/pictures/btn_25_25.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon16.addFile(QString::fromUtf8(":/pictures/btn_25_25_in_purple.png"), QSize(), QIcon::Normal, QIcon::On);
        toolButton_stop->setIcon(icon16);
        toolButton_stop->setIconSize(QSize(35, 35));
        toolButton_stop->setCheckable(true);
        toolButton_stop->setChecked(true);
        toolButton_stop->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_stop->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_stop, 5, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 295, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 6, 1, 1, 1);

        stackedWidget_mode_manual_auto_mdi->addWidget(page_8);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_5 = new QGridLayout(page_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_15 = new QLabel(page_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(0, 35));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_15, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 1, 0, 1, 1);

        stackedWidget_mode_manual_auto_mdi->addWidget(page_5);
        splitter_2->addWidget(stackedWidget_mode_manual_auto_mdi);

        gridLayout_6->addWidget(splitter_2, 1, 0, 1, 1);

        stackedWidget_toplevel->addWidget(page_2);
        editor = new QWidget();
        editor->setObjectName(QString::fromUtf8("editor"));
        gridLayout_19 = new QGridLayout(editor);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit_gcode = new QPlainTextEdit(editor);
        plainTextEdit_gcode->setObjectName(QString::fromUtf8("plainTextEdit_gcode"));

        gridLayout->addWidget(plainTextEdit_gcode, 0, 1, 1, 4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        toolButton_textedit_save_as = new QToolButton(editor);
        toolButton_textedit_save_as->setObjectName(QString::fromUtf8("toolButton_textedit_save_as"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/pictures/btn_25_25_file_save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_textedit_save_as->setIcon(icon17);
        toolButton_textedit_save_as->setIconSize(QSize(35, 35));
        toolButton_textedit_save_as->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_textedit_save_as->setAutoRaise(true);

        gridLayout->addWidget(toolButton_textedit_save_as, 1, 4, 1, 1);

        toolButton_text_edit_home = new QToolButton(editor);
        toolButton_text_edit_home->setObjectName(QString::fromUtf8("toolButton_text_edit_home"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/pictures/btn_25_25_home.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_text_edit_home->setIcon(icon18);
        toolButton_text_edit_home->setIconSize(QSize(35, 35));
        toolButton_text_edit_home->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_text_edit_home->setAutoRaise(true);

        gridLayout->addWidget(toolButton_text_edit_home, 1, 2, 1, 1);

        toolButton_textedit_save = new QToolButton(editor);
        toolButton_textedit_save->setObjectName(QString::fromUtf8("toolButton_textedit_save"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/pictures/btn_25_25_file_save.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_textedit_save->setIcon(icon19);
        toolButton_textedit_save->setIconSize(QSize(35, 35));
        toolButton_textedit_save->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_textedit_save->setAutoRaise(true);

        gridLayout->addWidget(toolButton_textedit_save, 1, 3, 1, 1);


        gridLayout_19->addLayout(gridLayout, 0, 2, 1, 1);

        frame_2 = new QFrame(editor);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy5.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy5);
        frame_2->setMinimumSize(QSize(200, 0));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setBaseSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_21 = new QGridLayout(frame_2);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_20->addWidget(label_13, 0, 0, 1, 1);

        toolButton_remove_line_nrs = new QToolButton(frame_2);
        toolButton_remove_line_nrs->setObjectName(QString::fromUtf8("toolButton_remove_line_nrs"));
        sizePolicy1.setHeightForWidth(toolButton_remove_line_nrs->sizePolicy().hasHeightForWidth());
        toolButton_remove_line_nrs->setSizePolicy(sizePolicy1);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/pictures/btn_25_25.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_remove_line_nrs->setIcon(icon20);
        toolButton_remove_line_nrs->setIconSize(QSize(35, 35));
        toolButton_remove_line_nrs->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_remove_line_nrs->setAutoRaise(true);

        gridLayout_20->addWidget(toolButton_remove_line_nrs, 1, 0, 1, 1);

        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_20->addWidget(label_16, 4, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(frame_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy6);
        plainTextEdit->setMinimumSize(QSize(350, 0));

        gridLayout_20->addWidget(plainTextEdit, 5, 0, 1, 1);

        toolButton_to_lower_letters = new QToolButton(frame_2);
        toolButton_to_lower_letters->setObjectName(QString::fromUtf8("toolButton_to_lower_letters"));
        toolButton_to_lower_letters->setIcon(icon20);
        toolButton_to_lower_letters->setIconSize(QSize(35, 35));
        toolButton_to_lower_letters->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_to_lower_letters->setAutoRaise(true);

        gridLayout_20->addWidget(toolButton_to_lower_letters, 3, 0, 1, 1);

        toolButton_to_capital_letters = new QToolButton(frame_2);
        toolButton_to_capital_letters->setObjectName(QString::fromUtf8("toolButton_to_capital_letters"));
        toolButton_to_capital_letters->setIcon(icon20);
        toolButton_to_capital_letters->setIconSize(QSize(35, 35));
        toolButton_to_capital_letters->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_to_capital_letters->setAutoRaise(true);

        gridLayout_20->addWidget(toolButton_to_capital_letters, 2, 0, 1, 1);


        gridLayout_21->addLayout(gridLayout_20, 0, 1, 1, 1);


        gridLayout_19->addWidget(frame_2, 0, 0, 1, 1);

        stackedWidget_toplevel->addWidget(editor);

        gridLayout_7->addWidget(stackedWidget_toplevel, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget_toplevel->setCurrentIndex(1);
        stackedWidget_index->setCurrentIndex(0);
        stackedWidget_main->setCurrentIndex(1);
        stackedWidget_mode_manual_auto_mdi->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "cnc controller", nullptr));
        toolButton_settings->setText(QCoreApplication::translate("MainWindow", " settings", nullptr));
        toolButton_empty_3->setText(QCoreApplication::translate("MainWindow", " ..", nullptr));
        toolButton_manual->setText(QCoreApplication::translate("MainWindow", " manual", nullptr));
        toolButton_auto->setText(QCoreApplication::translate("MainWindow", " auto", nullptr));
        toolButton_empty_2->setText(QCoreApplication::translate("MainWindow", " ..", nullptr));
        toolButton_mdi->setText(QCoreApplication::translate("MainWindow", " mdi", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_edit->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>edit in gcode editor.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_edit->setText(QCoreApplication::translate("MainWindow", " editor", nullptr));
        toolButton_test->setText(QCoreApplication::translate("MainWindow", " test", nullptr));
        toolButton_zoom_plus->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_top->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_ortho->setText(QCoreApplication::translate("MainWindow", " ORTHO", nullptr));
        toolButton_fit_all->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_zoom_min->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_bottom->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_front->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_back->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_3d->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_right->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_left->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Current file: ", nullptr));
        label_current_file->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "- SETTINGS -", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "max acceleration", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "trajectory :", nullptr));
        lineEdit_max_acceleration->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "max jerk", nullptr));
        lineEdit_max_jerk->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        lineEdit_max_velocity->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "max velocity", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "mm / s", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "mm / s^2", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "axis", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "max position", nullptr));
        lineEdit_max_jerk_4->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "max velocity", nullptr));
        lineEdit_max_acceleration_2->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        lineEdit_max_velocity_2->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "mm / s^2", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "x", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "y", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "z", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "a", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "b", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "c", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "u", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "v", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "w", nullptr));

        label_20->setText(QCoreApplication::translate("MainWindow", "mm / s", nullptr));
        lineEdit_max_jerk_2->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "min position", nullptr));
        lineEdit_max_jerk_3->setText(QCoreApplication::translate("MainWindow", "-1000", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "max jerk", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "max acceleration", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "..", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "- MANUAL -", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "step size unit", nullptr));
        label_jog_velocity->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        toolButton_jog_step->setText(QCoreApplication::translate("MainWindow", " jog step", nullptr));
        toolButton_jog_select_xyz_abc_uvw->setText(QCoreApplication::translate("MainWindow", " select xyz abc uvw", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "jog speed 0-100%", nullptr));
        toolButton_jog_z_min->setText(QCoreApplication::translate("MainWindow", "z -", nullptr));
        toolButton_jog_x_min->setText(QCoreApplication::translate("MainWindow", "x -", nullptr));
        toolButton_jog_z_plus->setText(QCoreApplication::translate("MainWindow", "z +", nullptr));
        label_jog_dro_x->setText(QCoreApplication::translate("MainWindow", "X 0.000", nullptr));
        toolButton_jog_y_plus->setText(QCoreApplication::translate("MainWindow", "y +", nullptr));
        toolButton_jog_x_plus->setText(QCoreApplication::translate("MainWindow", "x +", nullptr));
        toolButton_jog_y_min->setText(QCoreApplication::translate("MainWindow", "y -", nullptr));
        label_jog_dro_y->setText(QCoreApplication::translate("MainWindow", "Y 0.000", nullptr));
        label_jog_dro_z->setText(QCoreApplication::translate("MainWindow", "Z 0.000", nullptr));
        label_auto->setText(QCoreApplication::translate("MainWindow", "- AUTO -", nullptr));
        toolButton_open->setText(QCoreApplication::translate("MainWindow", " file open", nullptr));
        toolButton_reload->setText(QCoreApplication::translate("MainWindow", " file reload", nullptr));
        toolButton_run->setText(QCoreApplication::translate("MainWindow", " run", nullptr));
        toolButton_pause->setText(QCoreApplication::translate("MainWindow", " pause", nullptr));
        toolButton_stop->setText(QCoreApplication::translate("MainWindow", " stop", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "- MDI -", nullptr));
        plainTextEdit_gcode->setPlainText(QString());
        toolButton_textedit_save_as->setText(QCoreApplication::translate("MainWindow", " save as", nullptr));
        toolButton_text_edit_home->setText(QCoreApplication::translate("MainWindow", " back", nullptr));
        toolButton_textedit_save->setText(QCoreApplication::translate("MainWindow", " save", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Editor tools:", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_remove_line_nrs->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Remove line numbers and start spacing from text.</p><p>From:</p><p><span style=\" font-weight:700;\">N001 X0 Y0 Z0</span></p><p>to :</p><p><span style=\" font-weight:700;\">X0 Y0 Z0</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_remove_line_nrs->setText(QCoreApplication::translate("MainWindow", " remove line nr's", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Gcode legenda:", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "G0 	line rapid\n"
"G1 	line feed\n"
"G2 	arc, cirlce, helix clockwise cw\n"
"G3 	arc, circle, helix counter clockwise ccw\n"
"G9 	general motion \n"
"\n"
"G17  	xy plane \n"
"G18  	xz plane \n"
"G19  	yz plane \n"
"\n"
"G64 P Q L 	Path options\n"
"	P=tollerance\n"
"	Q=naive cam tollerance\n"
"	L=helix continuity\n"
"\n"
"", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_to_lower_letters->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>From:</p><p><span style=\" font-weight:700;\">X0 Y0 Z0</span></p><p>to :</p><p><span style=\" font-weight:700;\">x0 x0 x0</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_to_lower_letters->setText(QCoreApplication::translate("MainWindow", " to lower letters", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_to_capital_letters->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>From:</p><p><span style=\" font-weight:700;\">x0 x0 x0</span></p><p>to :</p><p><span style=\" font-weight:700;\">X0 Y0 Z0</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_to_capital_letters->setText(QCoreApplication::translate("MainWindow", " to capital letters", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
