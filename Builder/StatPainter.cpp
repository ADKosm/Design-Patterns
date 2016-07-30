//
// Created by alex on 30.07.16.
//

#include "StatPainter.h"

StatPainter::~StatPainter() {
}

void StatPainter::PreparePicture(int w, int h) {
    width = w;
    height = h;
}

void StatPainter::DrawHouse(int x, int y) {
    houseCount++;
}

void StatPainter::DrawFlower(int x, int y) {
    flowerCount++;
}

StatPainter::StatPainter() : houseCount(0), flowerCount(0) {
}


void StatPainter::GetStat() {
    std::cout << "Size of picture is " << width << "x" << height << std::endl;
    std::cout << "Number of houses equals to " << houseCount << std::endl;
    std::cout << "Number of flowers equals to " << flowerCount << std::endl;
}

