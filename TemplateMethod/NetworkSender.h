//
// Created by alex on 26.08.16.
//

#ifndef TEMPLATEMETHOD_NETWORKSENDER_H
#define TEMPLATEMETHOD_NETWORKSENDER_H

#include "Sender.h"

class NetworkSender : public Sender {
public:
    virtual ~NetworkSender() override;
    NetworkSender();

protected:

    virtual void OpenConnection() override;

    virtual void SendData(std::string s) override;

    virtual void CloseConnection() override;
};


#endif //TEMPLATEMETHOD_NETWORKSENDER_H
