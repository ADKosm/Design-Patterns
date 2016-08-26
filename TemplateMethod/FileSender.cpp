//
// Created by alex on 26.08.16.
//

#include <iostream>
#include "FileSender.h"

FileSender::~FileSender() {
}

FileSender::FileSender() : Sender() {
}

void FileSender::OpenConnection() {
    std::cout << "Open local file" << std::endl;
}

void FileSender::SendData(std::string s) {
    std::cout << "Write message \'" << s << "\' in local file" << std::endl;
}

void FileSender::CloseConnection() {
    std::cout << "Close file" << std::endl;
}

