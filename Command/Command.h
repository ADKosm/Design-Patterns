//
// Created by alex on 27.07.16.
//

#ifndef COMMAND_COMMAND_H
#define COMMAND_COMMAND_H


class Command {
public:
    virtual ~Command() {}

    virtual void Exec() = 0;

protected:
    Command() {}
};


#endif //COMMAND_COMMAND_H
