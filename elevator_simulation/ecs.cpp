#include "ecs.h"

ecs::ecs()
{
    for(int i = 0; i < NUM_ELEVATORS; ++i){
        elevators[i] = new elevator(i);
        int numRequests = (rand() % 10) + 1;
        elevators[i]->setFloorRequests(numRequests);
    }
}

void ecs::move(int floorNum){
    int min = findMin();
    qInfo("Elevator %d servicing", min);
    elevators[min]->setState(running);
    elevators[min]->move(floorNum);
    elevators[min]->setState(idle);
    for(int i = 0; i < NUM_ELEVATORS; ++i){
        int numRequests = (rand() % 10) + 1;
        elevators[i]->setFloorRequests(numRequests);
    }
}

void ecs::handlePowerOut(){
    for(int i = 0; i < NUM_ELEVATORS; ++i){
        qInfo("Elevator %d handling power outage", i);
        elevators[i]->setState(powerout);
        elevators[i]->handlePowerOut();
        elevators[i]->setState(idle);
        qInfo("\n");
    }
}

void ecs::handleFireAlarm(){
    for(int i = 0; i < NUM_ELEVATORS; ++i){
        qInfo("Elevator %d handling fire alarm", i);
        elevators[i]->handleFireAlarm();
        qInfo("\n");
    }
}

int ecs::findMin(){
    int min = 0;
    int numRequests = elevators[0]->getFloorRequests();

    for(int i = 0; i < NUM_ELEVATORS; ++i){
        if(elevators[i]->getFloorRequests() < numRequests){
            min = i;
            numRequests = elevators[i]->getFloorRequests();
        }
    }

    return min;
}

void ecs::handleHelp(){
    for(int i = 0; i < NUM_ELEVATORS; ++i){
        qInfo("Elevator %d handling help", i);
        elevators[i]->setState(help);
        elevators[i]->handleHelp();
        qInfo("\n");
    }
}

void ecs::handleObstacle(){
    for(int i = 0; i < NUM_ELEVATORS; ++i){
        qInfo("Elevator %d handling obstacle", i);
        elevators[i]->setState(idle);
        elevators[i]->handleObstacle();
        qInfo("\n");
    }
}

void ecs::handleOverload(){
    for(int i = 0; i < NUM_ELEVATORS; ++i){
        qInfo("Elevator %d handling overload", i);
        elevators[i]->setState(overload);
        elevators[i]->handleOverload();
        qInfo("\n");
    }
}
