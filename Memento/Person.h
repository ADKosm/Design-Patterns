//
// Created by alex on 24.08.16.
//

#ifndef MEMENTO_PERSON_H
#define MEMENTO_PERSON_H

#include <string>

class PersonMemento;

class Person {
friend class PersonMemento;
public:
    Person();
    ~Person();

    void SetMemento(PersonMemento * m);
    PersonMemento * GetMemento();

    void Initialize();
    std::string GetDescription();

private:
    std::string name;
    std::string surname;
    int age;
    int experiance;
};


#endif //MEMENTO_PERSON_H
