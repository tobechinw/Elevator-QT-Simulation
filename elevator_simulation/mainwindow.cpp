#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    uiECS = new ecs();
    connect(ui->help, SIGNAL(released()), this, SLOT(handleHelp()));
    connect(ui->normal2, SIGNAL(released()), this, SLOT(handleCase2()));
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
    uiECS->handleHelp();
    qInfo("\n");
}

void MainWindow::handleObstacle(){
    uiECS->handleObstacle();
    qInfo("\n");
}

void MainWindow::handleFireAlarm(){
    uiECS->handleFireAlarm();
    qInfo("\n");
}

void MainWindow::handleOverload(){
    uiECS->handleOverload();
    qInfo("\n");
}

void MainWindow::handlePowerOut(){
    uiECS->handlePowerOut();
    qInfo("\n");
}


void MainWindow::moveUp(){
    uiECS->move(4);
    qInfo("\n");
}


void MainWindow::moveDown(){
    uiECS->move(2);
    qInfo("\n");
}

void MainWindow::handleCase2(){
    uiECS->move(1, 3, 4);
    qInfo("\n");
}
