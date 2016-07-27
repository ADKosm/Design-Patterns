//
// Created by alex on 27.07.16.
//

#include "Picture.h"

void Picture::AddLine(std::string s) {
    data += s;
}

int Picture::GetWidth() {
    return width;
}


std::string Picture::GetPic() {
    return data;
}

