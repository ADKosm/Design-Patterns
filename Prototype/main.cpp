#include <iostream>

#include "Flowerbed.h"

int main() {

    Flowerbed fb;

    fb.Add("Rose");
    fb.Add("Sun");
    fb.Add("Sun");
    fb.Add("Bell");
    fb.Add("Rose");
    fb.Add("Rose");
    fb.Add("Sun");
    fb.Add("Bell");

    fb.AskUser();

    return 0;
}