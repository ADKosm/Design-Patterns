//
// Created by alex on 19.07.16.
//

#ifndef DECORATOR_WORKER_H
#define DECORATOR_WORKER_H

#include "Component.h"
#include <sstream>

class Worker : public Component {
public:
    Worker(std::string s, int n);
    ~Worker();

    std::string getDescription();
private:
    std::string name;
    int number;
};


#endif //DECORATOR_WORKER_H
