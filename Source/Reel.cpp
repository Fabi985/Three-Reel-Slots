#include "Slot.h"
#include "Reel.h"
#include "ReelBox.h"
#include "Symbol.h"

#include <iostream>
#include <cstdlib>
#include <string>

// Constructor
Reel::Reel() {
    reelID_ = 0;
    setupReel();
}

Reel::Reel(int ID) {
    reelID_ = ID;
    setupReel();
}

// Get
std::list<ReelBox> &Reel::getReelBoxList() {
    return reelBoxesList;
}

int Reel::getReelID() {
    return reelID_;
}

// Add
void Reel::addReelBox(ReelBox box) {
    reelBoxesList.push_back(box);
}

// Methods
void Reel::setupReel() {
    box1 = ReelBox(1);
    box2 = ReelBox(2);
    box3 = ReelBox(3);

    addReelBox(box1);
    addReelBox(box2);
    addReelBox(box3);
}

void Reel::rollReel(std::list<ReelBox> &reelBoxes) {
    // TODO: rework this
}

void Reel::updateReelBox(ReelBox &box, Symbol &symbol) {
    box.setReelBoxSymbol(symbol);
}