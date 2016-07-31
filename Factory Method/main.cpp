#include <iostream>

#include "EvilApplication.h"
#include "KindApplication.h"

int main() {
    int decision;
    std::cout << "(1) Kind or (2) Evil?" << std::endl << "> ";
    std::cin >> decision;

    Application * app;
    if(decision == 1) {
        app = new KindApplication();
    } else if(decision == 2) {
        app = new EvilApplication();
    } else {
        throw std::invalid_argument("Only 1 or 2!");
    }

    app->ShowUserName();

    return 0;
}