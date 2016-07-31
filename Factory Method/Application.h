//
// Created by alex on 31.07.16.
//

#ifndef FACTORY_METHOD_APPLICATION_H
#define FACTORY_METHOD_APPLICATION_H

#include "Dialog.h"

class Application {
public:
    virtual ~Application();

    virtual Dialog * GetDialog() = 0;
    void ShowUserName();
protected:
    Application();
};


#endif //FACTORY_METHOD_APPLICATION_H
