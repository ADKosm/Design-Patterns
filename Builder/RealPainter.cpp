//
// Created by alex on 30.07.16.
//

#include "RealPainter.h"

RealPainter::~RealPainter() {
}

void RealPainter::PreparePicture(int w, int h) {
    std::string t;
    for(int i = 0; i < w; i++) {
        t += ' ';
    }
    for(int i = 0; i < h; i++) {
        holst.push_back(t);
    }
}

void RealPainter::DrawHouse(int x, int y) {
    std::vector<std::string> templat {
            "   #   ",
            "  ###  ",
            "#######",
            "#######",
            "##   ##",
            "#######",
            "#######"
    };

    int yy = y-7;
    int xx = x;

    for(int i = 0; i < templat.size(); i++) {
        for(int j = 0; j < templat[0].size(); j++) {
            holst[yy+i][xx+j] = templat[i][j];
        }
    }
}

void RealPainter::DrawFlower(int x, int y) {
    std::vector<std::string> templat {
            " @ ",
           "\\|/",
            " | "
    };

    int yy = y-3;
    int xx = x-1;

    for(int i = 0; i < templat.size(); i++) {
        for(int j = 0; j < templat[0].size(); j++) {
            holst[yy+i][xx+j] = templat[i][j];
        }
    }
}

RealPainter::RealPainter() : Painter() {
}


std::string RealPainter::GetPicture() {
    std::string result;
    for(int i = 0; i < holst.size(); i++) {
        result += holst[i];
        result += "\n";
    }
    return result;

}

