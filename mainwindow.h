#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <serial.h>
#include <QDebug>
#include <QStringList>
#include <QTimer>
#include <QTime>

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void update(QByteArray data);
    void countdown();

private slots:
    void on_connect_clicked();
    void on_start_clicked();
    void on_reset_clicked();

private:
    Ui::MainWindow *ui;
    Serial *arduino;
    QTimer *temps;
    QTime timeDown;
};
#endif // MAINWINDOW_H
