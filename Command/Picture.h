//
// Created by alex on 27.07.16.
//

#ifndef COMMAND_PICTURE_H
#define COMMAND_PICTURE_H

#include <string>

class Picture {
public:
    Picture(int w) : width(w) { }
    ~Picture() { }

    void AddLine(std::string s);

    int GetWidth();
    std::string GetPic();

private:
    int width;
    std::string data;
};


#endif //COMMAND_PICTURE_H
