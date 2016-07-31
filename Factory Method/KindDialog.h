//
// Created by alex on 31.07.16.
//

#ifndef FACTORY_METHOD_KINDDIALOG_H
#define FACTORY_METHOD_KINDDIALOG_H

#include "Dialog.h"

class KindDialog : public Dialog{

public:
    KindDialog();
    virtual ~KindDialog() override;

    virtual std::string AskUserName() override;
};


#endif //FACTORY_METHOD_KINDDIALOG_H
