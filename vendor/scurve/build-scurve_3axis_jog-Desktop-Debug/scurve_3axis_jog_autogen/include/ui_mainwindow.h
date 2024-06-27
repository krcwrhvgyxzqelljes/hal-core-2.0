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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_4;
    QToolButton *toolButton_zplus;
    QToolButton *toolButton_zstop;
    QToolButton *toolButton_zmin;
    QLabel *label_zinfo;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButton_x_go;
    QLineEdit *lineEdit_tarpos_x;
    QLabel *label;
    QCheckBox *checkBox_x_finished;
    QPushButton *pushButton;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QToolButton *toolButton_z_go;
    QLineEdit *lineEdit_tarpos_z;
    QCheckBox *checkBox_z_finished;
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer_2;
    QToolButton *toolButton_y_go;
    QLabel *label_2;
    QLineEdit *lineEdit_tarpos_y;
    QCheckBox *checkBox_y_finished;
    QGridLayout *gridLayout;
    QLabel *label_xinfo;
    QToolButton *toolButton_xmin;
    QToolButton *toolButton_xstop;
    QToolButton *toolButton_xplus;
    QGridLayout *gridLayout_2;
    QLabel *label_yinfo;
    QToolButton *toolButton_ymin;
    QToolButton *toolButton_yplus;
    QToolButton *toolButton_ystop;
    QFrame *frame_5;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_z;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_x;
    QFrame *frame_4;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_y;
    QCheckBox *checkBox_pause_timer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(992, 765);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 35, 35);\n"
"color: rgb(255, 255, 255);\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_8 = new QGridLayout(centralWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        toolButton_zplus = new QToolButton(centralWidget);
        toolButton_zplus->setObjectName(QString::fromUtf8("toolButton_zplus"));

        gridLayout_4->addWidget(toolButton_zplus, 0, 1, 1, 1);

        toolButton_zstop = new QToolButton(centralWidget);
        toolButton_zstop->setObjectName(QString::fromUtf8("toolButton_zstop"));

        gridLayout_4->addWidget(toolButton_zstop, 0, 2, 1, 1);

        toolButton_zmin = new QToolButton(centralWidget);
        toolButton_zmin->setObjectName(QString::fromUtf8("toolButton_zmin"));

        gridLayout_4->addWidget(toolButton_zmin, 0, 0, 1, 1);

        label_zinfo = new QLabel(centralWidget);
        label_zinfo->setObjectName(QString::fromUtf8("label_zinfo"));

        gridLayout_4->addWidget(label_zinfo, 0, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 4, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 2, 2, 1, 1);

        toolButton_x_go = new QToolButton(centralWidget);
        toolButton_x_go->setObjectName(QString::fromUtf8("toolButton_x_go"));

        gridLayout_5->addWidget(toolButton_x_go, 0, 3, 1, 1);

        lineEdit_tarpos_x = new QLineEdit(centralWidget);
        lineEdit_tarpos_x->setObjectName(QString::fromUtf8("lineEdit_tarpos_x"));

        gridLayout_5->addWidget(lineEdit_tarpos_x, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        checkBox_x_finished = new QCheckBox(centralWidget);
        checkBox_x_finished->setObjectName(QString::fromUtf8("checkBox_x_finished"));

        gridLayout_5->addWidget(checkBox_x_finished, 1, 2, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_5->addWidget(pushButton, 1, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 2, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_7->addWidget(label_3, 0, 0, 1, 1);

        toolButton_z_go = new QToolButton(centralWidget);
        toolButton_z_go->setObjectName(QString::fromUtf8("toolButton_z_go"));

        gridLayout_7->addWidget(toolButton_z_go, 0, 2, 1, 1);

        lineEdit_tarpos_z = new QLineEdit(centralWidget);
        lineEdit_tarpos_z->setObjectName(QString::fromUtf8("lineEdit_tarpos_z"));

        gridLayout_7->addWidget(lineEdit_tarpos_z, 0, 1, 1, 1);

        checkBox_z_finished = new QCheckBox(centralWidget);
        checkBox_z_finished->setObjectName(QString::fromUtf8("checkBox_z_finished"));

        gridLayout_7->addWidget(checkBox_z_finished, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 5, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 2, 1, 1, 1);

        toolButton_y_go = new QToolButton(centralWidget);
        toolButton_y_go->setObjectName(QString::fromUtf8("toolButton_y_go"));

        gridLayout_6->addWidget(toolButton_y_go, 0, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_6->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_tarpos_y = new QLineEdit(centralWidget);
        lineEdit_tarpos_y->setObjectName(QString::fromUtf8("lineEdit_tarpos_y"));

        gridLayout_6->addWidget(lineEdit_tarpos_y, 0, 1, 1, 1);

        checkBox_y_finished = new QCheckBox(centralWidget);
        checkBox_y_finished->setObjectName(QString::fromUtf8("checkBox_y_finished"));

        gridLayout_6->addWidget(checkBox_y_finished, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_xinfo = new QLabel(centralWidget);
        label_xinfo->setObjectName(QString::fromUtf8("label_xinfo"));

        gridLayout->addWidget(label_xinfo, 0, 3, 1, 1);

        toolButton_xmin = new QToolButton(centralWidget);
        toolButton_xmin->setObjectName(QString::fromUtf8("toolButton_xmin"));

        gridLayout->addWidget(toolButton_xmin, 0, 0, 1, 1);

        toolButton_xstop = new QToolButton(centralWidget);
        toolButton_xstop->setObjectName(QString::fromUtf8("toolButton_xstop"));

        gridLayout->addWidget(toolButton_xstop, 0, 2, 1, 1);

        toolButton_xplus = new QToolButton(centralWidget);
        toolButton_xplus->setObjectName(QString::fromUtf8("toolButton_xplus"));

        gridLayout->addWidget(toolButton_xplus, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_yinfo = new QLabel(centralWidget);
        label_yinfo->setObjectName(QString::fromUtf8("label_yinfo"));

        gridLayout_2->addWidget(label_yinfo, 0, 3, 1, 1);

        toolButton_ymin = new QToolButton(centralWidget);
        toolButton_ymin->setObjectName(QString::fromUtf8("toolButton_ymin"));

        gridLayout_2->addWidget(toolButton_ymin, 0, 0, 1, 1);

        toolButton_yplus = new QToolButton(centralWidget);
        toolButton_yplus->setObjectName(QString::fromUtf8("toolButton_yplus"));

        gridLayout_2->addWidget(toolButton_yplus, 0, 1, 1, 1);

        toolButton_ystop = new QToolButton(centralWidget);
        toolButton_ystop->setObjectName(QString::fromUtf8("toolButton_ystop"));

        gridLayout_2->addWidget(toolButton_ystop, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 2, 0, 1, 1);

        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setMinimumSize(QSize(0, 150));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(frame_5);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_z = new QGridLayout();
        gridLayout_z->setSpacing(6);
        gridLayout_z->setObjectName(QString::fromUtf8("gridLayout_z"));

        gridLayout_16->addLayout(gridLayout_z, 0, 0, 1, 1);


        gridLayout_8->addWidget(frame_5, 4, 1, 2, 1);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 150));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_x = new QGridLayout();
        gridLayout_x->setSpacing(6);
        gridLayout_x->setObjectName(QString::fromUtf8("gridLayout_x"));

        gridLayout_3->addLayout(gridLayout_x, 0, 0, 1, 1);


        gridLayout_8->addWidget(frame, 0, 1, 2, 1);

        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(0, 150));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_4);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_y = new QGridLayout();
        gridLayout_y->setSpacing(6);
        gridLayout_y->setObjectName(QString::fromUtf8("gridLayout_y"));

        gridLayout_12->addLayout(gridLayout_y, 0, 0, 1, 1);


        gridLayout_8->addWidget(frame_4, 2, 1, 2, 1);

        checkBox_pause_timer = new QCheckBox(centralWidget);
        checkBox_pause_timer->setObjectName(QString::fromUtf8("checkBox_pause_timer"));

        gridLayout_8->addWidget(checkBox_pause_timer, 6, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 992, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "scurve 3axis jog controller", nullptr));
        toolButton_zplus->setText(QCoreApplication::translate("MainWindow", "z+", nullptr));
        toolButton_zstop->setText(QCoreApplication::translate("MainWindow", "z stop", nullptr));
        toolButton_zmin->setText(QCoreApplication::translate("MainWindow", "z-", nullptr));
        label_zinfo->setText(QCoreApplication::translate("MainWindow", "zinfo", nullptr));
        toolButton_x_go->setText(QCoreApplication::translate("MainWindow", "x go", nullptr));
        lineEdit_tarpos_x->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x tarpos ", nullptr));
        checkBox_x_finished->setText(QCoreApplication::translate("MainWindow", "x finished", nullptr));
        pushButton->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "z tarpos ", nullptr));
        toolButton_z_go->setText(QCoreApplication::translate("MainWindow", "z go", nullptr));
        lineEdit_tarpos_z->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        checkBox_z_finished->setText(QCoreApplication::translate("MainWindow", "z finished", nullptr));
        toolButton_y_go->setText(QCoreApplication::translate("MainWindow", "y go", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "y tarpos  ", nullptr));
        lineEdit_tarpos_y->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        checkBox_y_finished->setText(QCoreApplication::translate("MainWindow", "y finished", nullptr));
        label_xinfo->setText(QCoreApplication::translate("MainWindow", "xinfo", nullptr));
        toolButton_xmin->setText(QCoreApplication::translate("MainWindow", "x-", nullptr));
        toolButton_xstop->setText(QCoreApplication::translate("MainWindow", "x stop", nullptr));
        toolButton_xplus->setText(QCoreApplication::translate("MainWindow", "x+", nullptr));
        label_yinfo->setText(QCoreApplication::translate("MainWindow", "yinfo", nullptr));
        toolButton_ymin->setText(QCoreApplication::translate("MainWindow", "y-", nullptr));
        toolButton_yplus->setText(QCoreApplication::translate("MainWindow", "y+", nullptr));
        toolButton_ystop->setText(QCoreApplication::translate("MainWindow", "y stop", nullptr));
        checkBox_pause_timer->setText(QCoreApplication::translate("MainWindow", "Pause timer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
