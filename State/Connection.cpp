//
// Created by alex on 26.08.16.
//

#include "Connection.h"
#include "ConnectionState.h"
#include "OpenState.h"
#include "CloseState.h"

Connection::Connection() : state(new CloseState(this)) {
}

Connection::~Connection() {
    if(state != nullptr) delete state;
}

void Connection::Open(std::string path) {
    state->Open(path);
}

void Connection::Send(std::string message) {
    state->Send(message);
}

void Connection::Close() {
    state->Close();
}

void Connection::ChangeState(ConnectionState *s) {
    delete state;
    state = s;
}

