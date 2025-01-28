#include "serial.h"
#include <QDebug>

Serial::Serial(QObject *parent)
    : QObject{parent}
{
    _serial.setPortName("COM2");
    _serial.setBaudRate(QSerialPort::Baud1200);
    _serial.setDataBits(QSerialPort::Data8);
    _serial.setParity(QSerialPort::NoParity);
    _serial.setStopBits(QSerialPort::OneStop);
    _serial.setFlowControl(QSerialPort::NoFlowControl);

    connect(&_serial,&QSerialPort::readyRead,this,&Serial::newData);
}

Serial::~Serial(){
    _serial.close();
}

void Serial::close(){
    Serial::~Serial();
}

bool Serial::isConnected(){
    bool msg = false;
    msg = _serial.open(QIODevice::ReadWrite) ? true : false ;
    return msg;
}

void Serial::write(const char* msg){
    _serial.write(msg);
}


bool Serial::isOpen(){
    return _serial.isOpen();
}

bool Serial::isWritable(){
    return _serial.isWritable();
}

void Serial::newData(){
    emit gotData(_serial.readAll());
}

void Serial::setBaudRate(QSerialPort::BaudRate qvar){

    _serial.setBaudRate(qvar);
}

void Serial::setDataBits(QSerialPort::DataBits qvar){

    _serial.setDataBits(qvar);
}

void Serial::setParity(QSerialPort::Parity qvar){

    _serial.setParity(qvar);
}

void Serial::setStopBits(QSerialPort::StopBits qvar){

    _serial.setStopBits(qvar);
}

void Serial::setFlowControl(QSerialPort::FlowControl qvar){

    _serial.setFlowControl(qvar);

}

void Serial::setPortName(QString qvar){

    _serial.setPortName(qvar);
}
