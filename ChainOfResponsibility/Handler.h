//
// Created by alex on 20.08.16.
//

#ifndef CHAINOFRESPONSIBILITY_HANDLER_H
#define CHAINOFRESPONSIBILITY_HANDLER_H


class Handler {
public:
    Handler(Handler * s = nullptr);
    virtual ~Handler();

    virtual void HandleRequest();
    void SetSuccessor(Handler *s);
    void PassRequest();

private:
    Handler * successor;
};


#endif //CHAINOFRESPONSIBILITY_HANDLER_H
