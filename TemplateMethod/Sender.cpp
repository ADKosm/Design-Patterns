//
// Created by alex on 26.08.16.
//

#include "Sender.h"

Sender::~Sender() {
}

void Sender::SendMessage(std::string message) {
    OpenConnection();
    SendData(message);
    CloseConnection();
}

Sender::Sender() {
}

