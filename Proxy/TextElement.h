//
// Created by alex on 17.08.16.
//

#ifndef PROXY_TEXTELEMENT_H
#define PROXY_TEXTELEMENT_H

#include "Element.h"
#include <string>
#include <fstream>
#include <iostream>

class TextElement : public Element {
public:
    virtual ~TextElement() override;

    virtual void Draw() override;

    TextElement(std::string link);

private:

    std::string data;
};


#endif //PROXY_TEXTELEMENT_H
