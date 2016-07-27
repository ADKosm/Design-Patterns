//
// Created by alex on 27.07.16.
//

#ifndef COMMAND_NEWLINECOMMAND_H
#define COMMAND_NEWLINECOMMAND_H

#include "Command.h"
#include "Picture.h"

class NewLineCommand : public Command {
public:
    NewLineCommand(Picture *pic, std::string patt);
    virtual ~NewLineCommand();

    virtual void Exec();

private:
    Picture * picture;
    std::string pattern;
};


#endif //COMMAND_NEWLINECOMMAND_H
