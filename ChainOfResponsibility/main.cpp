#include <iostream>
#include "ElementA.h"
#include "ElementB.h"
#include "ElementC.h"

/*
Top    Mid  Bot

    +-->С+-->C
    |
 С+---->С+-->A
    |
    +-->B+-->C
         |
         +-->A
 * */

int main() {
    Element * topC = new ElementC();
    Element * midB = new ElementB();
    Element * midC1 = new ElementC();
    Element * midC2 = new ElementC();
    Element * botA1 = new ElementA();
    Element * botC1 = new ElementC();
    Element * botA2 = new ElementA();
    Element * botC2 = new ElementC();

    midB->AddElement(botA1);
    midB->AddElement(botC1);

    midC1->AddElement(botA2);

    midC2->AddElement(botC2);

    topC->AddElement(midB);
    topC->AddElement(midC1);
    topC->AddElement(midC2);

    botA1->HandleRequest();
    botC1->HandleRequest();
    botA2->HandleRequest();
    botC2->HandleRequest();
    return 0;
}