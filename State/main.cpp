#include <iostream>

#include "Connection.h"

int main() {
    Connection * con = new Connection();

    con->Send("Hello world!");
    con->Close();

    con->Open("yandex.ru");
    con->Open("google.com");
    con->Open("space.ru");

    con->Send("Hello, people!");
    con->Send("Chippa puppa");

    con->Close();
    con->Close();
    return 0;
}