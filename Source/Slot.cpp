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

    reel1 = Reel(1);
    reel2 = Reel(2);
    reel3 = Reel(3);

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

void Slot::spinSlot() {
    srand(time(0));
    for (Reel r : ReelList) {
        srand(time(0));
        r.rollReel(r.getReelBoxList());
    }
}
