//
// Created by alex on 10.08.16.
//

#ifndef ADAPTER_TEXT_H
#define ADAPTER_TEXT_H

#include "Shape.h"
#include "string"
#include "iostream"

class Text : public Shape{

public:
    virtual ~Text() override;

    virtual void Draw() override;


    Text(std::string a);

private:
    std::string text;
};


#endif //ADAPTER_TEXT_H
