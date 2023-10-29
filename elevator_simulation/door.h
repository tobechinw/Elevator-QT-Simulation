#ifndef DOOR_H
#define DOOR_H

#include <string>
#include "sensor.h"
#include <QDebug>


class door
{

private:
    sensor* lightSensor;
public:
    door();
    ~door();

    void openDoor();
    void closeDoor();
};

#endif // DOOR_H
