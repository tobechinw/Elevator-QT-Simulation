#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "state.h"
#include "bell.h"
#include "door.h"
#include "state.h"
#include <QDebug>
#include <string>



class elevator
{
private:
    int id;
    door* elevatorDoor;
    bell* elevatorBell;
    int floorNum;
    state elevatorState;
    int numFloorRequests;
    const int safeFloor = 1;
public:
    elevator(int);
    ~elevator();

    int getFloorNum();
    void setFloorNum(int);

    void openDoor();
    void closeDoor();
    void ringBell();
    void obstacle(bool);
    void showFloorNum();
    void sendFireSignal();
    void sendOverloadSignal();
    void sendHelpSignal();
    void callBuildingSafety();
    void call911();

    int getFloorRequests();
    void setState(state state);
    void setFloorRequests(int);
    void move(int);
    void moveUp(int);
    void moveDown(int);
    void handleObstacle();
    void handleOverload();
    void handleHelp();
    void handlePowerOut();
    void handleFireAlarm();
    void moveToSafeFloor();
};


#endif // ELEVATOR_H
