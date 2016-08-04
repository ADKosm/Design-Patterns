#include "Printer.h"

void Begin() {
    Printer * p = Printer::Instance();

    p->Print("Hello, everybody!");
}

void AskUser() {
    Printer * a = Printer::Instance();
    a->Print("What is your name?");
    a->Print("Your name is " + a->GetString());
}

void End() {
    Printer * e = Printer::Instance();

    e->Print("Thats all. Thank you!");
}

int main() {

    Begin();
    AskUser();
    End();

    return 0;
}