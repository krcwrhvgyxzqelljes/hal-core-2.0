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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_16;
    QToolButton *toolButton_file_open;
    QToolButton *toolButton_stop;
    QToolButton *toolButton_run;
    QToolButton *toolButton_pause;
    QToolButton *toolButton_reload;
    QFrame *frame_3;
    QGridLayout *gridLayout_4;
    QFrame *frame_2;
    QGridLayout *gridLayout_5;
    QWidget *page_2;
    QGridLayout *gridLayout_6;
    QSplitter *splitter_2;
    QStackedWidget *stackedWidget_5;
    QWidget *page_9;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_open;
    QSpacerItem *verticalSpacer;
    QWidget *page_10;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QGridLayout *gridLayout_8;
    QSplitter *splitter;
    QFrame *frame_4;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_occ;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_view_front;
    QToolButton *toolButton_view_back;
    QToolButton *toolButton_zoom_min;
    QToolButton *toolButton_view_bottom;
    QToolButton *toolButton_view_right;
    QToolButton *toolButton_view_left;
    QToolButton *toolButton_view_3d;
    QToolButton *toolButton_fit_all;
    QToolButton *toolButton_view_top;
    QToolButton *toolButton_zoom_plus;
    QFrame *frame_5;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_gcode;
    QWidget *page_4;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QStackedWidget *stackedWidget_4;
    QWidget *page_7;
    QGridLayout *gridLayout_10;
    QWidget *page_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1085, 644);
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
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        toolButton_file_open = new QToolButton(frame);
        toolButton_file_open->setObjectName(QString::fromUtf8("toolButton_file_open"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/vendor/icons/open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_file_open->setIcon(icon);
        toolButton_file_open->setIconSize(QSize(28, 28));

        gridLayout_16->addWidget(toolButton_file_open, 0, 0, 1, 1);

        toolButton_stop = new QToolButton(frame);
        toolButton_stop->setObjectName(QString::fromUtf8("toolButton_stop"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/vendor/icons/media-playback-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_stop->setIcon(icon1);
        toolButton_stop->setIconSize(QSize(28, 28));
        toolButton_stop->setCheckable(false);

        gridLayout_16->addWidget(toolButton_stop, 0, 4, 1, 1);

        toolButton_run = new QToolButton(frame);
        toolButton_run->setObjectName(QString::fromUtf8("toolButton_run"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/vendor/icons/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_run->setIcon(icon2);
        toolButton_run->setIconSize(QSize(28, 28));

        gridLayout_16->addWidget(toolButton_run, 0, 2, 1, 1);

        toolButton_pause = new QToolButton(frame);
        toolButton_pause->setObjectName(QString::fromUtf8("toolButton_pause"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/vendor/icons/media-playback-pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_pause->setIcon(icon3);
        toolButton_pause->setIconSize(QSize(28, 28));
        toolButton_pause->setCheckable(true);

        gridLayout_16->addWidget(toolButton_pause, 0, 3, 1, 1);

        toolButton_reload = new QToolButton(frame);
        toolButton_reload->setObjectName(QString::fromUtf8("toolButton_reload"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/vendor/icons/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_reload->setIcon(icon4);
        toolButton_reload->setIconSize(QSize(28, 28));

        gridLayout_16->addWidget(toolButton_reload, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_16, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_3 = new QFrame(page);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));

        gridLayout->addWidget(frame_3, 0, 1, 2, 1);

        frame_2 = new QFrame(page);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));

        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_6 = new QGridLayout(page_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        splitter_2 = new QSplitter(page_2);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        stackedWidget_5 = new QStackedWidget(splitter_2);
        stackedWidget_5->setObjectName(QString::fromUtf8("stackedWidget_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget_5->sizePolicy().hasHeightForWidth());
        stackedWidget_5->setSizePolicy(sizePolicy1);
        stackedWidget_5->setMaximumSize(QSize(100, 16777215));
        stackedWidget_5->setFrameShape(QFrame::StyledPanel);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        verticalLayout = new QVBoxLayout(page_9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_open = new QPushButton(page_9);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));

        verticalLayout->addWidget(pushButton_open);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        stackedWidget_5->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        stackedWidget_5->addWidget(page_10);
        splitter_2->addWidget(stackedWidget_5);
        stackedWidget_2 = new QStackedWidget(splitter_2);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget_2->sizePolicy().hasHeightForWidth());
        stackedWidget_2->setSizePolicy(sizePolicy2);
        stackedWidget_2->setFrameShape(QFrame::StyledPanel);
        stackedWidget_2->setFrameShadow(QFrame::Plain);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_8 = new QGridLayout(page_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        splitter = new QSplitter(page_3);
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

        gridLayout_11->addLayout(gridLayout_occ, 1, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        toolButton_view_front = new QToolButton(frame_4);
        toolButton_view_front->setObjectName(QString::fromUtf8("toolButton_view_front"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/vendor/icons/view-front.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_front->setIcon(icon5);
        toolButton_view_front->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_view_front, 0, 3, 1, 1);

        toolButton_view_back = new QToolButton(frame_4);
        toolButton_view_back->setObjectName(QString::fromUtf8("toolButton_view_back"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/vendor/icons/view-back.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_back->setIcon(icon6);
        toolButton_view_back->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_view_back, 0, 4, 1, 1);

        toolButton_zoom_min = new QToolButton(frame_4);
        toolButton_zoom_min->setObjectName(QString::fromUtf8("toolButton_zoom_min"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/vendor/icons/zoom_min.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_zoom_min->setIcon(icon7);
        toolButton_zoom_min->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_zoom_min, 0, 0, 1, 1);

        toolButton_view_bottom = new QToolButton(frame_4);
        toolButton_view_bottom->setObjectName(QString::fromUtf8("toolButton_view_bottom"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/vendor/icons/view-bottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_bottom->setIcon(icon8);
        toolButton_view_bottom->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_view_bottom, 0, 6, 1, 1);

        toolButton_view_right = new QToolButton(frame_4);
        toolButton_view_right->setObjectName(QString::fromUtf8("toolButton_view_right"));
        toolButton_view_right->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/vendor/icons/view-right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_right->setIcon(icon9);
        toolButton_view_right->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_view_right, 0, 8, 1, 1);

        toolButton_view_left = new QToolButton(frame_4);
        toolButton_view_left->setObjectName(QString::fromUtf8("toolButton_view_left"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/vendor/icons/view-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_left->setIcon(icon10);
        toolButton_view_left->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_view_left, 0, 7, 1, 1);

        toolButton_view_3d = new QToolButton(frame_4);
        toolButton_view_3d->setObjectName(QString::fromUtf8("toolButton_view_3d"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/vendor/icons/view-iso.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_3d->setIcon(icon11);
        toolButton_view_3d->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_view_3d, 0, 9, 1, 1);

        toolButton_fit_all = new QToolButton(frame_4);
        toolButton_fit_all->setObjectName(QString::fromUtf8("toolButton_fit_all"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/vendor/icons/zoom_extend.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_fit_all->setIcon(icon12);
        toolButton_fit_all->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_fit_all, 0, 2, 1, 1);

        toolButton_view_top = new QToolButton(frame_4);
        toolButton_view_top->setObjectName(QString::fromUtf8("toolButton_view_top"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/vendor/icons/view-top.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_view_top->setIcon(icon13);
        toolButton_view_top->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_view_top, 0, 5, 1, 1);

        toolButton_zoom_plus = new QToolButton(frame_4);
        toolButton_zoom_plus->setObjectName(QString::fromUtf8("toolButton_zoom_plus"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/vendor/icons/zoom_plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_zoom_plus->setIcon(icon14);
        toolButton_zoom_plus->setIconSize(QSize(28, 28));

        gridLayout_2->addWidget(toolButton_zoom_plus, 0, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_2, 0, 0, 1, 2);

        splitter->addWidget(frame_4);
        frame_5 = new QFrame(splitter);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        sizePolicy3.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy3);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(frame_5);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_gcode = new QGridLayout();
        gridLayout_gcode->setObjectName(QString::fromUtf8("gridLayout_gcode"));

        gridLayout_12->addLayout(gridLayout_gcode, 0, 0, 1, 1);

        splitter->addWidget(frame_5);

        gridLayout_8->addWidget(splitter, 0, 0, 1, 1);

        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        plainTextEdit = new QPlainTextEdit(page_4);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 50, 321, 461));
        plainTextEdit_2 = new QPlainTextEdit(page_4);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(370, 50, 311, 461));
        stackedWidget_2->addWidget(page_4);
        splitter_2->addWidget(stackedWidget_2);
        stackedWidget_4 = new QStackedWidget(splitter_2);
        stackedWidget_4->setObjectName(QString::fromUtf8("stackedWidget_4"));
        sizePolicy1.setHeightForWidth(stackedWidget_4->sizePolicy().hasHeightForWidth());
        stackedWidget_4->setSizePolicy(sizePolicy1);
        stackedWidget_4->setMaximumSize(QSize(100, 16777215));
        stackedWidget_4->setFrameShape(QFrame::StyledPanel);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        gridLayout_10 = new QGridLayout(page_7);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        stackedWidget_4->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        stackedWidget_4->addWidget(page_8);
        splitter_2->addWidget(stackedWidget_4);

        gridLayout_6->addWidget(splitter_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_7->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "cnc controller", nullptr));
        toolButton_file_open->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_stop->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_run->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_pause->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_reload->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "open", nullptr));
        toolButton_view_front->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_back->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_zoom_min->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_bottom->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_right->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_left->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_3d->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_fit_all->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_view_top->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_zoom_plus->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
