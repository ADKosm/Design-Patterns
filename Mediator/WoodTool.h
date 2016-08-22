//
// Created by alex on 23.08.16.
//

#ifndef MEDIATOR_WOODTOOLS_H
#define MEDIATOR_WOODTOOLS_H

class Mediator;

class WoodTool {
public:
    virtual ~WoodTool();

    virtual void Changed();

protected:
    WoodTool(Mediator *m);

private:
    Mediator * med;
};


#endif //MEDIATOR_WOODTOOLS_H
