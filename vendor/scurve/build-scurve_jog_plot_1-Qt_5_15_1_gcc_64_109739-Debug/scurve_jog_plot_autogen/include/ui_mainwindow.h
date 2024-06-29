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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_12;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_curvel;
    QLabel *label_curpos;
    QLabel *label_3;
    QLabel *label_curacc;
    QLabel *label_2;
    QCheckBox *checkBox_finished;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit_maxacc;
    QLineEdit *lineEdit_endvel;
    QLabel *label_9;
    QPushButton *pushButton_set_jermax;
    QPushButton *pushButton_set_endvel;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *lineEdit_jermax;
    QPushButton *pushButton_set_maxacc;
    QPushButton *pushButton_set_maxvel;
    QLineEdit *lineEdit_maxvel;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_fwd_tarpos;
    QPushButton *pushButton_jog_pos_rev;
    QLineEdit *lineEdit_rev_tarpos;
    QLabel *label_4;
    QPushButton *pushButton_jog_pos_fwd;
    QLabel *label_5;
    QPushButton *pushButton_jog_pause;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_13;
    QPushButton *pushButton_pause;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(992, 603);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 35, 35);\n"
"color: rgb(255, 255, 255);\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_12 = new QGridLayout(centralWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 150));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_12->addWidget(frame, 0, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(225, 0));
        gridLayout_10 = new QGridLayout(groupBox_4);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        label_curvel = new QLabel(groupBox_4);
        label_curvel->setObjectName(QString::fromUtf8("label_curvel"));
        label_curvel->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(label_curvel, 0, 3, 1, 1);

        label_curpos = new QLabel(groupBox_4);
        label_curpos->setObjectName(QString::fromUtf8("label_curpos"));

        gridLayout_2->addWidget(label_curpos, 2, 3, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        label_curacc = new QLabel(groupBox_4);
        label_curacc->setObjectName(QString::fromUtf8("label_curacc"));

        gridLayout_2->addWidget(label_curacc, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 2, 1, 1);

        checkBox_finished = new QCheckBox(groupBox_4);
        checkBox_finished->setObjectName(QString::fromUtf8("checkBox_finished"));

        gridLayout_2->addWidget(checkBox_finished, 3, 2, 1, 2);


        gridLayout_10->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_11->addWidget(groupBox_4, 0, 0, 2, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));

        gridLayout_9->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_11->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        lineEdit_maxacc = new QLineEdit(groupBox_3);
        lineEdit_maxacc->setObjectName(QString::fromUtf8("lineEdit_maxacc"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_maxacc->sizePolicy().hasHeightForWidth());
        lineEdit_maxacc->setSizePolicy(sizePolicy1);
        lineEdit_maxacc->setMinimumSize(QSize(100, 0));
        lineEdit_maxacc->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_maxacc, 0, 1, 1, 1);

        lineEdit_endvel = new QLineEdit(groupBox_3);
        lineEdit_endvel->setObjectName(QString::fromUtf8("lineEdit_endvel"));
        lineEdit_endvel->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_endvel, 3, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 1, 0, 1, 1);

        pushButton_set_jermax = new QPushButton(groupBox_3);
        pushButton_set_jermax->setObjectName(QString::fromUtf8("pushButton_set_jermax"));

        gridLayout_6->addWidget(pushButton_set_jermax, 1, 2, 1, 1);

        pushButton_set_endvel = new QPushButton(groupBox_3);
        pushButton_set_endvel->setObjectName(QString::fromUtf8("pushButton_set_endvel"));

        gridLayout_6->addWidget(pushButton_set_endvel, 3, 2, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 3, 0, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        lineEdit_jermax = new QLineEdit(groupBox_3);
        lineEdit_jermax->setObjectName(QString::fromUtf8("lineEdit_jermax"));
        lineEdit_jermax->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_jermax, 1, 1, 1, 1);

        pushButton_set_maxacc = new QPushButton(groupBox_3);
        pushButton_set_maxacc->setObjectName(QString::fromUtf8("pushButton_set_maxacc"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_set_maxacc->sizePolicy().hasHeightForWidth());
        pushButton_set_maxacc->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(pushButton_set_maxacc, 0, 2, 1, 1);

        pushButton_set_maxvel = new QPushButton(groupBox_3);
        pushButton_set_maxvel->setObjectName(QString::fromUtf8("pushButton_set_maxvel"));

        gridLayout_6->addWidget(pushButton_set_maxvel, 2, 2, 1, 1);

        lineEdit_maxvel = new QLineEdit(groupBox_3);
        lineEdit_maxvel->setObjectName(QString::fromUtf8("lineEdit_maxvel"));
        lineEdit_maxvel->setMaximumSize(QSize(100, 16777215));

        gridLayout_6->addWidget(lineEdit_maxvel, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 2, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);


        gridLayout_11->addWidget(groupBox_3, 0, 2, 2, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lineEdit_fwd_tarpos = new QLineEdit(groupBox_2);
        lineEdit_fwd_tarpos->setObjectName(QString::fromUtf8("lineEdit_fwd_tarpos"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_fwd_tarpos->sizePolicy().hasHeightForWidth());
        lineEdit_fwd_tarpos->setSizePolicy(sizePolicy4);
        lineEdit_fwd_tarpos->setMinimumSize(QSize(100, 0));
        lineEdit_fwd_tarpos->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(lineEdit_fwd_tarpos, 3, 1, 2, 1);

        pushButton_jog_pos_rev = new QPushButton(groupBox_2);
        pushButton_jog_pos_rev->setObjectName(QString::fromUtf8("pushButton_jog_pos_rev"));

        gridLayout_4->addWidget(pushButton_jog_pos_rev, 0, 0, 1, 1);

        lineEdit_rev_tarpos = new QLineEdit(groupBox_2);
        lineEdit_rev_tarpos->setObjectName(QString::fromUtf8("lineEdit_rev_tarpos"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEdit_rev_tarpos->sizePolicy().hasHeightForWidth());
        lineEdit_rev_tarpos->setSizePolicy(sizePolicy5);
        lineEdit_rev_tarpos->setMinimumSize(QSize(100, 0));
        lineEdit_rev_tarpos->setMaximumSize(QSize(100, 16777215));

        gridLayout_4->addWidget(lineEdit_rev_tarpos, 5, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 5, 0, 1, 1);

        pushButton_jog_pos_fwd = new QPushButton(groupBox_2);
        pushButton_jog_pos_fwd->setObjectName(QString::fromUtf8("pushButton_jog_pos_fwd"));

        gridLayout_4->addWidget(pushButton_jog_pos_fwd, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 3, 0, 2, 1);

        pushButton_jog_pause = new QPushButton(groupBox_2);
        pushButton_jog_pause->setObjectName(QString::fromUtf8("pushButton_jog_pause"));

        gridLayout_4->addWidget(pushButton_jog_pause, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 0, 0, 1, 1);


        gridLayout_11->addWidget(groupBox_2, 0, 3, 2, 1);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 0));
        gridLayout_13 = new QGridLayout(groupBox_5);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        pushButton_pause = new QPushButton(groupBox_5);
        pushButton_pause->setObjectName(QString::fromUtf8("pushButton_pause"));

        gridLayout_13->addWidget(pushButton_pause, 0, 0, 1, 1);


        gridLayout_11->addWidget(groupBox_5, 1, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 1, 0, 1, 1);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "scurve jog plot", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "motion status", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "curvel:", nullptr));
        label_curvel->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_curpos->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "curacc:", nullptr));
        label_curacc->setText(QCoreApplication::translate("MainWindow", "0.000", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "curpos:", nullptr));
        checkBox_finished->setText(QCoreApplication::translate("MainWindow", "finished", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "jog velocity", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "motion settings", nullptr));
        lineEdit_maxacc->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        lineEdit_endvel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "jerk max", nullptr));
        pushButton_set_jermax->setText(QCoreApplication::translate("MainWindow", "jerk max", nullptr));
        pushButton_set_endvel->setText(QCoreApplication::translate("MainWindow", "set endvel", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "velocity end", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "acceleration max", nullptr));
        lineEdit_jermax->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_set_maxacc->setText(QCoreApplication::translate("MainWindow", "set maxacc", nullptr));
        pushButton_set_maxvel->setText(QCoreApplication::translate("MainWindow", "set maxvel", nullptr));
        lineEdit_maxvel->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "velocity max", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "jog position", nullptr));
        lineEdit_fwd_tarpos->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        pushButton_jog_pos_rev->setText(QCoreApplication::translate("MainWindow", "reverse", nullptr));
        lineEdit_rev_tarpos->setText(QCoreApplication::translate("MainWindow", "-100", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "rev_tarpos:", nullptr));
        pushButton_jog_pos_fwd->setText(QCoreApplication::translate("MainWindow", "forward", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "fwd_tarpos:", nullptr));
        pushButton_jog_pause->setText(QCoreApplication::translate("MainWindow", "pause", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "qt realtime plot", nullptr));
        pushButton_pause->setText(QCoreApplication::translate("MainWindow", "pause timer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
