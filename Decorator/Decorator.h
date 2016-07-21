//
// Created by alex on 21.07.16.
//

#ifndef DECORATOR_DECORATOR_H
#define DECORATOR_DECORATOR_H

#include "Component.h"

class Decorator : public Component {
public:
    virtual ~Decorator();

    virtual std::string getDescription();

protected:
    Decorator(Component * c);

private:
    Component * comp;
};


#endif //DECORATOR_DECORATOR_H
