//
// Created by alex on 26.08.16.
//

#ifndef STATE_CONNECTION_H
#define STATE_CONNECTION_H

#include "string"

class ConnectionState;
class OpenState;
class CloseState;

class Connection {
friend class ConnectionState;
friend class OpenState;
friend class CloseState;

public:
    Connection();
    ~Connection();

    void Open(std::string path);
    void Send(std::string message);
    void Close();

private:
    void ChangeState(ConnectionState * s);

    ConnectionState * state;
};


#endif //STATE_CONNECTION_H
