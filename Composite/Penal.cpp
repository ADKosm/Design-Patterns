//
// Created by alex on 12.07.16.
//

#include "Penal.h"

Penal::Penal() {

}

Penal::~Penal() {
    Component *c;
    for(int i = 0; c = GetComponent(i); i++) {
        delete c;
    }
}

int Penal::Price() {
    int result = 0;

    Component * c;
    for(int i = 0; c = GetComponent(i); i++) {
        result += c->Price();
    }

    return result;
}

void Penal::Add(Component *c) {
    elements.push_back(c);
}

Component *Penal::GetComponent(int index) {
    return (index >= 0 && index < elements.size()) ? elements[index] : nullptr;
}

void Penal::Describe() {
    std::cout << "One penal(" << Price() << "$):" << std::endl;
    Component *c;
    for(int i = 0; c = GetComponent(i); i++) {
        c->Describe();
        std::cout << std::endl;
    }
}






