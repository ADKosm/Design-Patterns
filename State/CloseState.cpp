//
// Created by alex on 26.08.16.
//

#include <iostream>
#include "CloseState.h"
#include "Connection.h"
#include "OpenState.h"

CloseState::~CloseState() {

}

void CloseState::Open(std::string path) {
    std::cout << "Open the connection with \'" << path << "\'" << std::endl;
    con->ChangeState(new OpenState(path, con));
}

void CloseState::Send(std::string message) {
    std::cout << "Can\'t send any message because connection is closed" << std::endl;
}

void CloseState::Close() {
    std::cout << "Can't close connection because connection is already closed" << std::endl;
}

CloseState::CloseState(Connection *c) : ConnectionState(c) {
}

