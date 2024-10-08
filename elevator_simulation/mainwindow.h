#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "elevator.h"
#include "ecs.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    ecs* uiECS;

private slots:
    void doSomething();
    void handleHelp();
    void handleObstacle();
    void handleFireAlarm();
    void handleOverload();
    void handlePowerOut();
    void moveUp();
    void moveDown();
    void handleCase2();
};
#endif // MAINWINDOW_H
