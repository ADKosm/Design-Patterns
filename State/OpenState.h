//
// Created by alex on 26.08.16.
//

#ifndef STATE_OPENSTATE_H
#define STATE_OPENSTATE_H

#include "ConnectionState.h"

class OpenState : public ConnectionState {
public:
    virtual ~OpenState() override;

    virtual void Open(std::string path) override;

    virtual void Send(std::string message) override;

    virtual void Close() override;

    OpenState(std::string path, Connection *c);

private:
    std::string opened_path;
};


#endif //STATE_OPENSTATE_H
