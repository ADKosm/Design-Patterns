//
// Created by alex on 27.07.16.
//

#include "NewLineCommand.h"

NewLineCommand::NewLineCommand(Picture *pic, std::string patt) : picture(pic), pattern(patt) {
}

NewLineCommand::~NewLineCommand() {
}

void NewLineCommand::Exec() {
    std::string newline;
    for(int i = static_cast<int>(pattern.size()); i < picture->GetWidth(); i += static_cast<int>(pattern.size())) {
        newline += pattern;
    }
    for(int i = 0; i < picture->GetWidth() - static_cast<int>(newline.size()); i++) {
        newline.push_back(pattern[i]);
    }
    newline += '\n';
    picture->AddLine(newline);
}

