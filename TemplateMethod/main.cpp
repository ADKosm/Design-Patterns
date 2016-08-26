#include <iostream>

#include "FileSender.h"
#include "NetworkSender.h"

int main() {
    Sender * local = new FileSender();
    Sender * remote = new NetworkSender();

    local->SendMessage("Hello, local file");
    remote->SendMessage("Hello, remote site");
    return 0;
}