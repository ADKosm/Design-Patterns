//
// Created by alex on 26.08.16.
//

#ifndef TEMPLATEMETHOD_SENDER_H
#define TEMPLATEMETHOD_SENDER_H

#include <string>

class Sender {
public:
    virtual ~Sender();

    void SendMessage(std::string message);

protected:
    Sender();

    virtual void OpenConnection() = 0;
    virtual void SendData(std::string s) = 0;
    virtual void CloseConnection() = 0;

};


#endif //TEMPLATEMETHOD_SENDER_H
