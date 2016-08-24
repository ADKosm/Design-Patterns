//
// Created by alex on 24.08.16.
//

#include <iostream>
#include <sstream>
#include "Person.h"
#include "PersonMemento.h"

Person::Person() {
}

Person::~Person() {
}

void Person::SetMemento(PersonMemento *m) {
    name = m->name;
    surname = m->surname;
    age = m->age;
    experiance = m->experiance;
}

PersonMemento *Person::GetMemento() {
    return new PersonMemento(this);
}

void Person::Initialize() {
    std::cout << "Your name: ";
    std::cin >> name;
    std::cout << "Your surname: ";
    std::cin >> surname;
    std::cout << "Your age: ";
    std::cin >> age;
    std::cout << "Your experience: ";
    std::cin >> experiance;
}

std::string Person::GetDescription() {
    std::stringstream ss;
    std::string result;

    ss << "This is a description of this person: " << std::endl
    << "Name: " << name << std::endl
    << "Surname: " << surname << std::endl
    << "Age: " << age << std::endl
    << "Experiance: " << experiance << std::endl;

    std::string temp;
    while(std::getline(ss, temp )) {
        result += temp;
        result += "\n";
    }
    return result;
}

