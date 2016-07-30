//
// Created by alex on 30.07.16.
//

#ifndef BUILDER_BUILDER_H
#define BUILDER_BUILDER_H


class Painter {
public:
    virtual ~Painter();

    virtual void PreparePicture(int w, int h) = 0;
    virtual void DrawHouse(int x, int y) = 0 ;
    virtual void DrawFlower(int x, int y) = 0;
protected:
    Painter();
};


#endif //BUILDER_BUILDER_H
