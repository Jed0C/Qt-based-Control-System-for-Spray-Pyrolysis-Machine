/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboPort;
    QComboBox *comboBaudRate;
    QComboBox *comboDataBits;
    QComboBox *comboParity;
    QComboBox *comboStopBits;
    QComboBox *comboFlowControl;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *reset;
    QPushButton *connect;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *spinBox_start;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spinBox_end;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_9;
    QGroupBox *groupBox_3;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_h;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox_mm;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBox_s;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_12;
    QPushButton *start;
    QGroupBox *groupBox_4;
    QLabel *Time;
    QGroupBox *groupBox_5;
    QLabel *countdown;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(720, 380);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 361, 351));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(9);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName("tab");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(12);
        tab->setFont(font1);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 10, 241, 241));
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 211, 184));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboPort = new QComboBox(layoutWidget);
        comboPort->setObjectName("comboPort");

        verticalLayout_2->addWidget(comboPort);

        comboBaudRate = new QComboBox(layoutWidget);
        comboBaudRate->setObjectName("comboBaudRate");

        verticalLayout_2->addWidget(comboBaudRate);

        comboDataBits = new QComboBox(layoutWidget);
        comboDataBits->setObjectName("comboDataBits");

        verticalLayout_2->addWidget(comboDataBits);

        comboParity = new QComboBox(layoutWidget);
        comboParity->setObjectName("comboParity");

        verticalLayout_2->addWidget(comboParity);

        comboStopBits = new QComboBox(layoutWidget);
        comboStopBits->setObjectName("comboStopBits");

        verticalLayout_2->addWidget(comboStopBits);

        comboFlowControl = new QComboBox(layoutWidget);
        comboFlowControl->setObjectName("comboFlowControl");

        verticalLayout_2->addWidget(comboFlowControl);


        horizontalLayout->addLayout(verticalLayout_2);

        widget = new QWidget(tab);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 280, 158, 29));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        reset = new QPushButton(widget);
        reset->setObjectName("reset");
        reset->setFont(font1);

        horizontalLayout_2->addWidget(reset);

        connect = new QPushButton(widget);
        connect->setObjectName("connect");
        connect->setFont(font1);

        horizontalLayout_2->addWidget(connect);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 30, 281, 111));
        groupBox_2->setFont(font1);
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 60, 221, 27));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        spinBox_start = new QSpinBox(widget1);
        spinBox_start->setObjectName("spinBox_start");
        spinBox_start->setFont(font1);
        spinBox_start->setMaximum(24);

        horizontalLayout_5->addWidget(spinBox_start);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        spinBox_end = new QSpinBox(widget1);
        spinBox_end->setObjectName("spinBox_end");
        spinBox_end->setFont(font1);
        spinBox_end->setMaximum(25);
        spinBox_end->setValue(25);

        horizontalLayout_5->addWidget(spinBox_end);

        widget2 = new QWidget(groupBox_2);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 30, 241, 22));
        horizontalLayout_6 = new QHBoxLayout(widget2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget2);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        horizontalLayout_6->addWidget(label_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        label_9 = new QLabel(widget2);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);

        horizontalLayout_6->addWidget(label_9);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(20, 150, 281, 111));
        groupBox_3->setFont(font1);
        widget3 = new QWidget(groupBox_3);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(20, 60, 231, 31));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinBox_h = new QSpinBox(widget3);
        spinBox_h->setObjectName("spinBox_h");
        spinBox_h->setFont(font1);

        horizontalLayout_3->addWidget(spinBox_h);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        spinBox_mm = new QSpinBox(widget3);
        spinBox_mm->setObjectName("spinBox_mm");
        spinBox_mm->setFont(font1);
        spinBox_mm->setMaximum(59);

        horizontalLayout_3->addWidget(spinBox_mm);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        spinBox_s = new QSpinBox(widget3);
        spinBox_s->setObjectName("spinBox_s");
        spinBox_s->setFont(font1);
        spinBox_s->setMaximum(59);

        horizontalLayout_3->addWidget(spinBox_s);

        widget4 = new QWidget(groupBox_3);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(20, 30, 241, 22));
        horizontalLayout_4 = new QHBoxLayout(widget4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget4);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);

        horizontalLayout_4->addWidget(label_10);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_11 = new QLabel(widget4);
        label_11->setObjectName("label_11");
        label_11->setFont(font1);

        horizontalLayout_4->addWidget(label_11);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        label_12 = new QLabel(widget4);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);

        horizontalLayout_4->addWidget(label_12);

        start = new QPushButton(tab_2);
        start->setObjectName("start");
        start->setGeometry(QRect(260, 280, 75, 31));
        start->setFont(font1);
        tabWidget->addTab(tab_2, QString());
        start->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(380, 20, 321, 151));
        groupBox_4->setFont(font1);
        Time = new QLabel(groupBox_4);
        Time->setObjectName("Time");
        Time->setGeometry(QRect(10, 30, 301, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(50);
        font2.setKerning(false);
        Time->setFont(font2);
        Time->setAcceptDrops(false);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(380, 200, 321, 141));
        groupBox_5->setFont(font1);
        countdown = new QLabel(groupBox_5);
        countdown->setObjectName("countdown");
        countdown->setGeometry(QRect(20, 30, 301, 91));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibri")});
        font3.setPointSize(50);
        countdown->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Serial parameter", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Baude Rate", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Data Bits", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Stop Bits", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "FlowControl", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "connect", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "connection configuration", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Scan boards (cm)", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Starting point", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "End point", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Time scanning", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Hour", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Minute", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Second", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "scan parameters", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Time", nullptr));
        Time->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "stop after", nullptr));
        countdown->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
