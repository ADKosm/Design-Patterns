//
// Created by alex on 11.08.16.
//

#ifndef FACADE_KEYHOLDER_H
#define FACADE_KEYHOLDER_H

class Coder;
class Decoder;

class KeyHolder {

    friend class Coder;
    friend class Decoder;

public:
    KeyHolder(int k);
    ~KeyHolder();

private:

    int GetKey();

    int key;
};


#endif //FACADE_KEYHOLDER_H
