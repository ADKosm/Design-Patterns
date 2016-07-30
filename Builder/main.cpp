#include <iostream>

#include "Picture.h"
#include "RealPainter.h"
#include "StatPainter.h"

int main() {

    Picture pic;

    RealPainter * rp = new RealPainter();
    StatPainter * sp = new StatPainter();

    pic.CreatePicture(rp); // to build real picture
    pic.CreatePicture(sp); // to collect statictic

    pic.DrawPicture(rp);

    sp->GetStat();

    return 0;
}