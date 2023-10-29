#include "door.h"

door::door(){}

void door::openDoor(){
    qInfo("Opening doors");
    qInfo("Doors are opened");
}

void door::closeDoor(){
    qInfo("Doors closing, please stay clear of elevator");
    qInfo("Doors closed");
}
