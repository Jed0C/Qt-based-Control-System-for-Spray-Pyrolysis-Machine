#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QStringList>
#include <QString>
#include <QList>
#include <QTime>
#include <QMessageBox>

QStringList PortNameList = {"COM2","COM3","COM4","COM5","COM6","COM7","COM8"};
QStringList BaudeRateList = {"1200", "2400", "4800", "9600", "19200","38400","57600","115200" };
QStringList DataBitsList ={"Data5", "Data6", "Data7", "Data8"};
QStringList ParityList = {"NoParity", "EvenParity", "OddParity", "SpaceParity", "MarkParity"};
QStringList StopBitsList ={"OneStop", "OneAndHalfStop", "TwoStop"};
QStringList FlowControlList = {"NoFlowControl", "HardwareControl", "SoftwareControl"};

QList<QSerialPort::FlowControl> FClist= {QSerialPort::NoFlowControl,QSerialPort::HardwareControl,QSerialPort::SoftwareControl};
QList<QSerialPort::Parity> Plist= {QSerialPort::NoParity,QSerialPort::EvenParity,QSerialPort::OddParity,QSerialPort::SpaceParity,QSerialPort::MarkParity};
QList<QSerialPort::StopBits> SBlist= {QSerialPort::OneStop,QSerialPort::OneAndHalfStop,QSerialPort::TwoStop};
QList<QSerialPort::BaudRate> BRlist= {QSerialPort::Baud1200,QSerialPort::Baud2400,QSerialPort::Baud4800,QSerialPort::Baud9600,QSerialPort::Baud19200,QSerialPort::Baud38400,QSerialPort::Baud57600,QSerialPort::Baud115200};
QList<QSerialPort::DataBits> DBlist= {QSerialPort::Data5,QSerialPort::Data6,QSerialPort::Data7,QSerialPort::Data8};


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //fixing the size of the mainwindow
    this->setFixedSize(this->geometry().width(),this->geometry().height());
    this ->setWindowTitle("Spray pyrolysis application");

    //setup the comboboxs
    ui->comboBaudRate->addItems(BaudeRateList);
    ui->comboDataBits->addItems(DataBitsList);
    ui->comboParity->addItems(ParityList);
    ui->comboStopBits->addItems(StopBitsList);
    ui->comboFlowControl->addItems(FlowControlList);
    ui->comboPort->addItems(PortNameList);

    ui->comboBaudRate->setCurrentIndex(3);
    ui->comboDataBits->setCurrentIndex(3);
    ui->comboPort->setCurrentIndex(1);

    //Serial object( to arduino)
    arduino =new Serial;
    connect(arduino,&Serial::gotData,this,&MainWindow::update);

    //Time object
    timeDown = QTime(0,0,0);
    ui->Time->setText(timeDown.toString("hh:mm:ss"));
    ui->countdown->setText(timeDown.toString("hh:mm:ss"));

    //Timer object
    temps = new QTimer(this);
    connect(temps, &QTimer::timeout, this, &MainWindow::countdown);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update(QByteArray data)
{
    // nothing here ; i didn't use this slot for this project.
}


void MainWindow::countdown(){

    //decrementing the time by 1 second
    timeDown.setHMS(timeDown.addSecs(-1).hour(),timeDown.addSecs(-1).minute(),timeDown.addSecs(-1).second());
    ui->countdown->setText(timeDown.toString("hh:mm:ss"));

    if(timeDown.hour() == 0 && timeDown.minute() == 0 && timeDown.second() == 0)
    {
        temps->stop();
        ui->start->setEnabled(true);
    }

}

void MainWindow::on_connect_clicked()
{
    arduino->setPortName(PortNameList.at(ui->comboPort->currentIndex()));
    arduino->setBaudRate(BRlist.at(ui->comboBaudRate->currentIndex()));
    arduino->setDataBits(DBlist.at(ui->comboDataBits->currentIndex()));
    arduino->setParity(Plist.at(ui->comboParity->currentIndex()));
    arduino->setStopBits(SBlist.at(ui->comboStopBits->currentIndex()));
    arduino->setFlowControl(FClist.at(ui->comboFlowControl->currentIndex()));

    if(!arduino->isConnected()){
        ui->reset->setDisabled(arduino->isOpen());
        ui->statusbar->showMessage("cannot connect",2000);
    }
}

void MainWindow::on_start_clicked()
{
    QString msg =QString::number(ui->spinBox_start->value()).toLatin1()+"-";
    msg +=QString::number(ui->spinBox_end->value()).toLatin1()+"-";
    msg +=QString::number(ui->spinBox_h->value()).toLatin1()+"-";
    msg +=QString::number(ui->spinBox_mm->value()).toLatin1()+"-";
    msg +=QString::number(ui->spinBox_s->value()).toLatin1()+"-";

    timeDown.setHMS(ui->spinBox_h->value(),ui->spinBox_mm->value(),ui->spinBox_s->value());
    ui->Time->setText(timeDown.toString("hh:mm:ss"));

    if(ui->spinBox_end->value() < ui->spinBox_start->value()){
        QMessageBox::critical(this ,"Important","The End Point must be greater than Starting point.");
    }
    else
    {
        temps->start(1000);
        //write to arduino(send scan parameters)
        if(arduino->isWritable()){
            arduino->write(msg.toLatin1());
            //disable the start button until the finish of the operation ("stop after == 00:00:00")
            ui->start->setDisabled(true);
        }
    }
}

void MainWindow::on_reset_clicked()
{
    arduino->close();
    arduino =new Serial;

    ui->comboBaudRate->setCurrentIndex(1);
    ui->comboDataBits->setCurrentIndex(3);
    ui->comboParity->setCurrentIndex(0);
    ui->comboStopBits->setCurrentIndex(0);
    ui->comboFlowControl->setCurrentIndex(0);
    ui->comboPort->setCurrentIndex(0);

    ui->reset->setEnabled(true);
}
