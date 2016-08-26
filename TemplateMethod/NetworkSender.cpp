//
// Created by alex on 26.08.16.
//

#include <iostream>
#include "NetworkSender.h"

NetworkSender::~NetworkSender() {

}

NetworkSender::NetworkSender() : Sender() {

}

void NetworkSender::OpenConnection() {
    std::cout << "Start connection with remote resource" << std::endl;
}

void NetworkSender::SendData(std::string s) {
    std::cout << "Transfering message \'" << s << "\' to remote resource" << std::endl;
}

void NetworkSender::CloseConnection() {
    std::cout << "Clode connection with remote resource" << std::endl;
}

