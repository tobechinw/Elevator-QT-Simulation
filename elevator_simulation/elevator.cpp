#include "elevator.h"


elevator::elevator(int id)
{
    this->id = id;
    this->elevatorDoor = new door();
    this->elevatorBell = new bell();
    this->elevatorState = idle;
    this->floorNum = 1;
}

int elevator::getFloorNum(){
    return floorNum;
}

void elevator::setState(state currState){
    this->elevatorState = currState;
}

void elevator::handleFireAlarm(){
    qInfo("FIRE: There is a fire. Please stay calm while elevator moves to safe floor.");
    moveToSafeFloor();
}

void elevator::handleHelp(){
    qInfo("HELP: Connecting passenger to building safety");
    callBuildingSafety();
}

void elevator::handlePowerOut(){
    qInfo("POWER OUTAGE: The elevator has lost power.");
    moveToSafeFloor();
}

void elevator::handleObstacle(){
    obstacle(true);
    setState(running);
}

void elevator::obstacle(bool isObstacle){
    if(isObstacle){
        qInfo("OBSTACLE: Please stay clear of doors");
    }
    closeDoor();
}

void elevator::handleOverload(){
    qInfo("OVERLOAD: The elevator is carrying too much weight. Please reduce the load");
    openDoor();
    closeDoor();
    setState(running);
}

void elevator::move(int destination){
    if(destination < getFloorNum()){
        qInfo("Moving down to floor %d", destination);
        moveDown(destination);
    }else if (destination > getFloorNum()){
        qInfo("Moving up to floor %d", destination);
        moveUp(destination);
    }else{
        qInfo("Already on destination floor %d", destination);
    }
}

void elevator::setFloorNum(int floorNum) {
    this->floorNum = floorNum;
}

void elevator::moveUp(int destination){
    qInfo("Moving to floor %d", destination);
    int currFloor = getFloorNum();
    for(int i = currFloor; i <= destination; ++i){
        qInfo("On floor %d", i);
        setFloorNum(i);
    }
    qInfo("Arrived at floor %d", destination);
}

void elevator::moveDown(int destination){
    qInfo("Moving to floor %d", destination);
    int currFloor = getFloorNum();
    for(int i = currFloor; i >= destination; i--){
        qInfo("On floor %d", i);
        setFloorNum(i);
    }
    qInfo("Arrived at floor %d", getFloorNum());
}

void elevator::moveToSafeFloor(){
    qInfo("Moving to safe floor");
    move(safeFloor);
    qInfo("On safe floor, please evacuate the elevator");
    openDoor();
    ringBell();
    closeDoor();
    setState(idle);
}

void elevator::openDoor(){
    elevatorDoor->openDoor();
}

void elevator::closeDoor(){
    elevatorDoor->closeDoor();
}

void elevator::ringBell(){
    elevatorBell->ring();
}

void elevator::callBuildingSafety(){
    qInfo("Connecting passenger to building safety");
    qInfo("Passenger connected to building safety");
    qInfo("Done");
    setState(running);
}

void elevator::call911(){
    qInfo("Connecting passenger to 911");
    qInfo("Passenger connected to 911");
    qInfo("Done");
    setState(running);
}

void elevator::setFloorRequests(int floorRequests){
    numFloorRequests = floorRequests;
}

int elevator::getFloorRequests(){
    return numFloorRequests;
}
