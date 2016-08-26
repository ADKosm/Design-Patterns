//
// Created by alex on 26.08.16.
//

#ifndef STATE_CONNECTIONSTATE_H
#define STATE_CONNECTIONSTATE_H

#include <string>

class Connection;

class ConnectionState {
public:
    virtual ~ConnectionState();

    virtual void Open(std::string path) = 0;
    virtual void Send(std::string message) = 0;
    virtual void Close() = 0;
protected:
    ConnectionState(Connection *c);

    Connection * con;
};


#endif //STATE_CONNECTIONSTATE_H
