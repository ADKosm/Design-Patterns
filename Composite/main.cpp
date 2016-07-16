#include "Pen.h"
#include "Penal.h"
#include "Pencil.h"

int main() {
    Penal * base = new Penal();
    Penal * bluePenal = new Penal();
    Penal * whitePenal = new Penal();

    bluePenal->Add(new Pen(10));
    bluePenal->Add(new Pen(5));
    bluePenal->Add(new Pencil(2));

    whitePenal->Add(new Pencil(3));
    whitePenal->Add(new Pen(7));
    whitePenal->Add(new Pen(1));

    base->Add(bluePenal);
    base->Add(whitePenal);
    base->Add(new Pen(3));
    base->Add(new Pencil(4));

    base->Describe();
    return 0;
}