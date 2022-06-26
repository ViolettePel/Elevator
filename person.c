#include "person.h"

Person* createPerson(int src, int dest){
    Person* res = malloc(sizeof(Person));
    
    res -> src = src;
    res -> dest = dest;

    return res;
}

PersonList* createPersonList(Person *p){
    PersonList* res = malloc(sizeof(PersonList));
    
    res -> person = p;
    res -> next = NULL;

    return res;
}

PersonList* insert(Person *p,PersonList *list){
    PersonList* res = malloc(sizeof(PersonList));

    res -> person = p;
    res -> next = list;

    return res;
}