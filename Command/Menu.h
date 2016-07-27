//
// Created by alex on 27.07.16.
//

#ifndef COMMAND_MENU_H
#define COMMAND_MENU_H

#include "Button.h"
#include <string>
#include <vector>
#include <iostream>

class Menu {
public:
    Menu();
    ~Menu();

    void AddButton(std::string lab, Button * butt);
    void Show();
    void HandleUser();
    bool Exit();

private:
    std::vector< std::pair<std::string, Button *> > data;
    bool exit;
};


#endif //COMMAND_MENU_H
