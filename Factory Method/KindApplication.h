//
// Created by alex on 31.07.16.
//

#ifndef FACTORY_METHOD_KINDAPPLICATION_H
#define FACTORY_METHOD_KINDAPPLICATION_H

#include "Application.h"
#include "KindDialog.h"

class KindApplication : public Application {

public:
    KindApplication();
    virtual ~KindApplication() override;

    virtual Dialog *GetDialog() override;
};


#endif //FACTORY_METHOD_KINDAPPLICATION_H
