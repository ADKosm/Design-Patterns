//
// Created by alex on 24.08.16.
//

#ifndef MEMENTO_PERSONMEMENTO_H
#define MEMENTO_PERSONMEMENTO_H

#include <string>
class Person;

class PersonMemento {
    friend class Person;
public:
    ~PersonMemento();

private:
    PersonMemento(Person * p);

    std::string name;
    std::string surname;
    int age;
    int experiance;
};


#endif //MEMENTO_PERSONMEMENTO_H
