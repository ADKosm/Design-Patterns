#include <iostream>

#include "Tree.h"
#include "Watering.h"
#include "Axe.h"
#include "Mediator.h"

int main() {
    Mediator * mediator = new Mediator();

    Tree * tree = mediator->GetTree();
    Axe * axe = mediator->GetAxe();
    Watering * watering = mediator->GetWatering();

    for(int i = 0 ; i < 7; i++) watering->Water();
    axe->Cut();
    axe->Cut();
    axe->Cut();
    for(int i = 0; i < 5; i++) watering->Water();
    axe->Cut();

    return 0;
}