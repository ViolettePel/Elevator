#include "elevator.h"

Elevator *create_elevator(int capacity, int currentFloor, PersonList *persons){
    Elevator *res;

    res -> capacity = capacity;
    res -> currentFloor = currentFloor;
    res -> targetFloor = 0;
    res -> persons = persons;

    return res;
}
Building *create_building(int nbFloor, Elevator *elevator, PersonList **waitingLists){
    Building *res;

    res -> elevator = elevator;
    res -> nbFloor = nbFloor;
    res -> waitingLists = waitingLists;
}

PersonList* exitElevator(Elevator *e);
PersonList* enterElevator(Elevator *e, PersonList *list);

void stepElevator(Building *b){
    if(b -> elevator -> currentFloor == b -> elevator -> targetFloor){
        PersonList* exitElevator(Elevator *e);
        PersonList* enterElevator(Elevator *e, PersonList *waitingList);
    }
    else if (b -> elevator -> currentFloor > b -> elevator -> targetFloor){
        (b -> elevator -> currentFloor)--;
    }
    else{
        (b -> elevator -> currentFloor)++;
    }
}

PersonList* exitElevator(Elevator *e){

}

PersonList* enterElevator(Elevator *e, PersonList *waintingList){

}