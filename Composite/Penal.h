//
// Created by alex on 12.07.16.
//

#ifndef COMPOSITE_PENAL_H
#define COMPOSITE_PENAL_H

#include "component.h"

class Penal : public Component {
public:
    Penal();
    virtual ~Penal();

    virtual int Price();
    virtual void Describe();

    virtual void Add(Component * c);
    virtual Component* GetComponent(int index);

private:
    std::vector<Component*> elements;
};


#endif //COMPOSITE_PENAL_H
