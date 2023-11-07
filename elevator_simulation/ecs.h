#ifndef ECS_H
#define ECS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "elevator.h"

#define NUM_ELEVATORS 2


class ecs
{
public:
    ecs();
    void move(int);
    void moveUp(int);
    void moveDown(int);
    void handleObstacle();
    void handleOverload();
    void handleHelp();
    void handlePowerOut();
    void handleFireAlarm();
    void moveToSafeFloor();
    int findMin();

private:
    elevator* elevators[NUM_ELEVATORS];
};

#endif // ECS_H
