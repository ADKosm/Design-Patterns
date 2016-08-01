//
// Created by alex on 01.08.16.
//

#ifndef PROTOTYPE_FLOWER_H
#define PROTOTYPE_FLOWER_H

#include <string>
#include <vector>

class Flower {
public:

    Flower(char s, std::string desc);

    ~Flower();

    std::string GetPicture();
    std::string GetDescription();
    std::vector<std::string> GetSheme();

    Flower * Clone();

private:
    char symbol;
    std::string description;
};


#endif //PROTOTYPE_FLOWER_H
