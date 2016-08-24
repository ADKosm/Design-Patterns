#include <iostream>

#include "PersonMemento.h"
#include "Person.h"

int main() {
    Person * p = new Person();

    std::cout << "First initialisation: " << std::endl;
    p->Initialize();

    std::cout << p->GetDescription() << std::endl;
    PersonMemento * m = p->GetMemento();

    std::cout << "Reinitialisation: " << std::endl;
    p->Initialize();
    std::cout << p->GetDescription() << std::endl;

    std::cout << "Recovering base object" << std::endl;
    p->SetMemento(m);

    std::cout << p->GetDescription() << std::endl;

    delete m;
    return 0;
}