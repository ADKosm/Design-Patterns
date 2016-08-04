//
// Created by alex on 05.08.16.
//

#ifndef SINGLETON_PRINTER_H
#define SINGLETON_PRINTER_H

#include <string>
#include <iostream>

class Printer {  // in this example, client can print any text on the screen only thought this class
public:
    static Printer * Instance();
    void Print(std::string s);
    std::string GetString();

    ~Printer();

protected:
    Printer();

private:
    static Printer * inst;
};


#endif //SINGLETON_PRINTER_H
