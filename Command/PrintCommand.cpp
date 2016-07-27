//
// Created by alex on 27.07.16.
//

#include "PrintCommand.h"


PrintCommand::PrintCommand(Picture *pic) : picture(pic) {
}

PrintCommand::~PrintCommand() {
}

void PrintCommand::Exec() {
    std::cout << picture->GetPic() << std::endl;
}

