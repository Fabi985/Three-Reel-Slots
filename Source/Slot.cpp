#include "Slot.h"
#include "Reel.h"
#include "ReelBox.h"
#include "Symbol.h"

#include <iostream>
#include <string>
#include <list>

// Constructor
Slot::Slot() {
    score_ = 0;
    token_ = 0;
    return_ = 0;

    reel1 = Reel();
    reel2 = Reel();
    reel3 = Reel();

    ReelList.push_back(reel1);
    ReelList.push_back(reel2);
    ReelList.push_back(reel3);
}

// Get
std::list<Reel> Slot::getReelList() {
    return ReelList;
}

std::list<Symbol> Slot::getSymbolsList() {
    return SlotSymbolsList;
}

// Methods
void Slot::addSymbol(Symbol Symbol) {
    SlotSymbolsList.push_back(Symbol);
}

void Slot::spinSlot(std::list<Symbol> symbolsList) {
    for (Reel r : ReelList) {
        r.rollReel(r.getReelBoxList());
    }
}
