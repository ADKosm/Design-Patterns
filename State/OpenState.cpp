//
// Created by alex on 26.08.16.
//

#include <iostream>
#include "Connection.h"
#include "OpenState.h"
#include "CloseState.h"

OpenState::~OpenState() {
}

void OpenState::Open(std::string path) {
    std::cout << "Can\'t open path \'" << path << "\' because path \'" << opened_path << "\' is already opened!" << std::endl;
}

void OpenState::Send(std::string message) {
    std::cout << "Message \'" << message << "\' was sended to the \'" << opened_path << "\'" << std::endl;
}

void OpenState::Close() {
    std::cout << "Connection with \'" << opened_path << "\' was closed!" << std::endl;
    con->ChangeState(new CloseState(con));
}

OpenState::OpenState(std::string path, Connection *c) : ConnectionState(c), opened_path(path) {
}

