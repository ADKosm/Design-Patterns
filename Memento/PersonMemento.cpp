//
// Created by alex on 24.08.16.
//

#include "PersonMemento.h"
#include "Person.h"

PersonMemento::~PersonMemento() {
}

PersonMemento::PersonMemento(Person *p) :
    name(p->name),
    surname(p->surname),
    age(p->age),
    experiance(p->experiance)
{
}

