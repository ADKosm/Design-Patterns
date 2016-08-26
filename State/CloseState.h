//
// Created by alex on 26.08.16.
//

#ifndef STATE_CLOSESTATE_H
#define STATE_CLOSESTATE_H

#include "ConnectionState.h"

class CloseState : public ConnectionState{

public:
    virtual ~CloseState() override;

    virtual void Open(std::string path) override;

    virtual void Send(std::string message) override;

    virtual void Close() override;

    CloseState(Connection *c);
};


#endif //STATE_CLOSESTATE_H
