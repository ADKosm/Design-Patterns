//
// Created by alex on 31.07.16.
//

#include "Application.h"

Application::~Application() {
}


Application::Application() {
}

void Application::ShowUserName() {
    Dialog * d = GetDialog();
    std::string name = d->AskUserName();
    std::cout << "Your name is " << name << std::endl;
    delete d;
}

