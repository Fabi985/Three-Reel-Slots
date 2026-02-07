#include "ReelBox.h"
#include "Symbol.h"

#include <iostream>
#include <string>

// Constructor
ReelBox::ReelBox() {
    reelBoxID_ = 0;
    rbSymbol_ = Symbol();
}

ReelBox::ReelBox(int ID) {
    reelBoxID_ = ID;
}

// Get
int ReelBox::getReelBoxID() {
    return reelBoxID_;
}

Symbol ReelBox::getReelSymbol() {
    return rbSymbol_;
}


// Set
void ReelBox::setReelBoxID(int ID) {
    reelBoxID_ = ID;
}

// Find out how to do pointer work properly
void ReelBox::setReelBoxSymbol(Symbol symbol) {
    rbSymbol_.setSymbol(symbol);
}

void ReelBox::setReelBox(int ID, Symbol symbol) {
    reelBoxID_ = ID;
    // gaah
}