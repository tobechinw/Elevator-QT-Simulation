#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    uiElevator = new elevator(1);
    connect(ui->help, SIGNAL(released()), this, SLOT(handleHelp()));
    connect(ui->fire, SIGNAL(released()), this, SLOT(handleFireAlarm()));
    connect(ui->overload, SIGNAL(released()), this, SLOT(handleOverload()));
    connect(ui->powerout, SIGNAL(released()), this, SLOT(handlePowerOut()));
    connect(ui->obstacle, SIGNAL(released()), this, SLOT(handleObstacle()));
    connect(ui->moveup, SIGNAL(released()), this, SLOT(moveUp()));
    connect(ui->movedown, SIGNAL(released()), this, SLOT(moveDown()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doSomething(){
    qInfo("Hello World");
}

void MainWindow::handleHelp(){
    uiElevator->setState(help);
    uiElevator->handleHelp();
}

void MainWindow::handleObstacle(){
    uiElevator->setState(idle);
    uiElevator->handleObstacle();
}

void MainWindow::handleFireAlarm(){
    uiElevator->setState(fire);
    uiElevator->handleFireAlarm();
}

void MainWindow::handleOverload(){
    uiElevator->setState(overload);
    uiElevator->handleOverload();
}

void MainWindow::handlePowerOut(){
    uiElevator->setState(powerout);
    uiElevator->handlePowerOut();
    uiElevator->setState(idle);
}


void MainWindow::moveUp(){
    uiElevator->setState(running);
    uiElevator->move(5);
    uiElevator->setState(idle);
}


void MainWindow::moveDown(){
    uiElevator->setState(running);
    uiElevator->move(3);
    uiElevator->setState(idle);
}
