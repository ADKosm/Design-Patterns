//
// Created by alex on 31.07.16.
//

#ifndef FACTORY_METHOD_EVILDIALOG_H
#define FACTORY_METHOD_EVILDIALOG_H

#include "Dialog.h"

class EvilDialog : public Dialog {

public:
    EvilDialog();
    virtual ~EvilDialog() override;

    virtual std::string AskUserName() override;
};


#endif //FACTORY_METHOD_EVILDIALOG_H
