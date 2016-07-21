//
// Created by alex on 21.07.16.
//

#ifndef DECORATOR_STARBORDEREDDECORATOR_H
#define DECORATOR_STARBORDEREDDECORATOR_H

#include "Decorator.h"
#include <vector>
#include <sstream>

class StarBorderedDecorator : public Decorator {
public:
    StarBorderedDecorator(Component *c);
    ~StarBorderedDecorator();

    std::string getDescription();

private:
    unsigned long countOfStrings(std::vector<std::string> &v);
    std::string generateString(unsigned long number, char symbol);
};


#endif //DECORATOR_STARBORDEREDDECORATOR_H
