//
// Created by alex on 31.07.16.
//

#ifndef FACTORY_METHOD_EVILAPPLCATION_H
#define FACTORY_METHOD_EVILAPPLCATION_H

#include "Application.h"
#include "EvilDialog.h"

class EvilApplication : public Application {
public:
    EvilApplication();
    virtual ~EvilApplication() override;

    virtual Dialog *GetDialog() override;
};


#endif //FACTORY_METHOD_EVILAPPLCATION_H
