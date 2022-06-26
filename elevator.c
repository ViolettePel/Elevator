#include "elevator.h"

Elevator *create_elevator(int capacity, int currentFloor, PersonList *persons){
    Elevator *res = malloc(sizeof(Elevator));

    res -> capacity = capacity;
    res -> currentFloor = currentFloor;
    res -> targetFloor = 0;
    res -> persons = persons;

    return res;
}
Building *create_building(int nbFloor, Elevator *elevator, PersonList **waitingLists){
    Building *res = malloc(sizeof(Building));

    res -> elevator = elevator;
    res -> nbFloor = nbFloor;
    res -> waitingLists = waitingLists;

    return res;
}

PersonList* exitElevator(Elevator *e){
    PersonList *exit;
    PersonList *stay;
    PersonList *p = e -> persons;
    while(p -> next != NULL){
        if(p -> person -> dest == e -> currentFloor){
            PersonList *exit = insert(p -> person,exit);
            p = p -> next;
        }
        else{
            PersonList *stay = insert(p -> person,exit);
            p = p -> next;
        }
    }      
    e -> persons = stay;
    return exit;
}
PersonList* enterElevator(Elevator *e, PersonList *list){

}

void stepElevator(Building *b){
    if(b -> elevator -> currentFloor == b -> elevator -> targetFloor){
        exitElevator(b -> elevator);
        enterElevator(b -> elevator, *(b -> waitingLists + b -> elevator -> targetFloor));
    }
    else if (b -> elevator -> currentFloor > b -> elevator -> targetFloor){
        (b -> elevator -> currentFloor)--;
    }
    else{
        (b -> elevator -> currentFloor)++;
    }
}
