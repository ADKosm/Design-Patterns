//
// Created by alex on 12.07.16.
//

#ifndef COMPOSITE_COMPONENT_H
#define COMPOSITE_COMPONENT_H

#include <iostream>
#include <vector>
#include <string>

class Component {
public:
    virtual ~Component() {};

    // common functions for all components
    virtual int Price() = 0;
    virtual void Describe() = 0;

    // functions for manipulate childs and parents
    virtual void Add(Component * c) {};
    virtual Component* GetComponent(int index) {};

protected:
    Component(){}
};

#endif //COMPOSITE_COMPONENT_H
