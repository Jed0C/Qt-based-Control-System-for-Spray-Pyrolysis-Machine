#ifndef SERIAL_H
#define SERIAL_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QVariant>

class Serial : public QObject
{
    Q_OBJECT
public:
    explicit Serial(QObject *parent = nullptr);
    ~Serial();

    void init();
    void close();
    void write(const char* msg);
    bool isOpen();
    bool isWritable();
    void setPortName(QString qvar);
    void setBaudRate(QSerialPort::BaudRate qvar);
    void setParity(QSerialPort::Parity qvar);
    void setStopBits(QSerialPort::StopBits qvar);
    void setFlowControl(QSerialPort::FlowControl qvar);
    void setDataBits(QSerialPort::DataBits qvar);
    bool isConnected();

private slots:
    void newData();

signals:
    void gotData(QByteArray data);

private:
    QSerialPort _serial;
};

#endif // SERIAL_H
