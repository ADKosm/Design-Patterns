//
// Created by alex on 26.08.16.
//

#ifndef TEMPLATEMETHOD_FILESENDER_H
#define TEMPLATEMETHOD_FILESENDER_H

#include "Sender.h"

class FileSender : public Sender {

public:
    virtual ~FileSender() override;
    FileSender();

protected:

    virtual void OpenConnection() override;

    virtual void SendData(std::string s) override;

    virtual void CloseConnection() override;
};


#endif //TEMPLATEMETHOD_FILESENDER_H
