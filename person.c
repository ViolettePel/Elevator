#include "person.h"

Person* createPerson(int src, int dest){
    Person* res;
    
    res -> src = src;
    res -> dest = dest;

    return res;
}

PersonList* insert(Person *p,PersonList *list){
    PersonList* res;

    res -> person = p;
    res -> next = list;
}