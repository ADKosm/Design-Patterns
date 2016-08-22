//
// Created by alex on 23.08.16.
//

#include "Mediator.h"

#include "WoodTool.h"

WoodTool::~WoodTool() {
}

void WoodTool::Changed() {
    med->WoodToolChanged(this);
}

WoodTool::WoodTool(Mediator *m) : med(m) {
}

