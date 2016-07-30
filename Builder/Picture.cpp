//
// Created by alex on 30.07.16.
//

#include "Picture.h"

Picture::Picture() {
}

Picture::~Picture() {
}

void Picture::CreatePicture(Painter *b) {
    b->PreparePicture(40, 40);

    b->DrawHouse(2, 8);
    b->DrawHouse(12, 14);
    b->DrawHouse(20, 20);
    b->DrawHouse(30, 10);

    b->DrawFlower(5, 30);
    b->DrawFlower(8, 30);
    b->DrawFlower(12, 30);
    b->DrawFlower(28, 20);
    b->DrawFlower(32, 20);
    b->DrawFlower(28, 10);
}

void Picture::DrawPicture(RealPainter *p) {
    data = p->GetPicture();
    std::cout << data << std::endl;
}

