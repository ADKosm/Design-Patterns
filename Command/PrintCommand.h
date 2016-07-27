//
// Created by alex on 27.07.16.
//

#ifndef COMMAND_PRINTCOMMAND_H
#define COMMAND_PRINTCOMMAND_H

#include "Command.h"
#include "Picture.h"

#include <iostream>

class PrintCommand : public Command {
public:
    PrintCommand(Picture * pic);
    virtual ~PrintCommand();

    virtual void Exec();

private:
    Picture * picture;
};


#endif //COMMAND_PRINTCOMMAND_H
