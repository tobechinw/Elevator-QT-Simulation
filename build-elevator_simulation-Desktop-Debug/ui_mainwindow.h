/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *fire;
    QPushButton *obstacle;
    QPushButton *help;
    QPushButton *overload;
    QPushButton *powerout;
    QPushButton *moveup;
    QPushButton *movedown;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fire = new QPushButton(centralwidget);
        fire->setObjectName(QString::fromUtf8("fire"));
        fire->setGeometry(QRect(300, 290, 83, 25));
        obstacle = new QPushButton(centralwidget);
        obstacle->setObjectName(QString::fromUtf8("obstacle"));
        obstacle->setGeometry(QRect(210, 290, 83, 25));
        help = new QPushButton(centralwidget);
        help->setObjectName(QString::fromUtf8("help"));
        help->setGeometry(QRect(120, 290, 83, 25));
        overload = new QPushButton(centralwidget);
        overload->setObjectName(QString::fromUtf8("overload"));
        overload->setGeometry(QRect(390, 290, 83, 25));
        powerout = new QPushButton(centralwidget);
        powerout->setObjectName(QString::fromUtf8("powerout"));
        powerout->setGeometry(QRect(480, 290, 83, 25));
        moveup = new QPushButton(centralwidget);
        moveup->setObjectName(QString::fromUtf8("moveup"));
        moveup->setGeometry(QRect(110, 80, 121, 81));
        movedown = new QPushButton(centralwidget);
        movedown->setObjectName(QString::fromUtf8("movedown"));
        movedown->setGeometry(QRect(240, 80, 141, 81));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        fire->setText(QCoreApplication::translate("MainWindow", "fire", nullptr));
        obstacle->setText(QCoreApplication::translate("MainWindow", "obstacle", nullptr));
        help->setText(QCoreApplication::translate("MainWindow", "help", nullptr));
        overload->setText(QCoreApplication::translate("MainWindow", "overload", nullptr));
        powerout->setText(QCoreApplication::translate("MainWindow", "power out", nullptr));
        moveup->setText(QCoreApplication::translate("MainWindow", "move up", nullptr));
        movedown->setText(QCoreApplication::translate("MainWindow", "move down", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
