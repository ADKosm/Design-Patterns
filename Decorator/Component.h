//
// Created by alex on 19.07.16.
//

#ifndef DECORATOR_COMPONENT_H
#define DECORATOR_COMPONENT_H

#include <string>

class Component {
public:
    virtual ~Component() {}

    virtual std::string getDescription() = 0;

protected:
    Component() {}
};


#endif //DECORATOR_COMPONENT_H
