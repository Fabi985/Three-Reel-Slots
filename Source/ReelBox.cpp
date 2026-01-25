#include "ReelBox.h"
#include "Symbol.h"

#include <iostream>
#include <string>

// Constructor
ReelBox::ReelBox() {
    reelBoxID_ = 0;
    symbol_ = Symbol();
}

ReelBox::ReelBox(int ID) {
    reelBoxID_ = ID;
}

// Get
int ReelBox::getReelBoxID() {
    return reelBoxID_;
}

Symbol ReelBox::getReelSymbol() {
    return symbol_;
}


// Set
void ReelBox::setReelBoxID(int &ID) {
    reelBoxID_ = ID;
}

void ReelBox::setReelBoxSymbol(Symbol &symbol) {
    symbol_ = symbol;
}

void ReelBox::setReelBox(int &ID, Symbol &symbol) {
    reelBoxID_ = ID;
    // symbol_.setSymbolID(symbol.getSymbolID());
    // symbol_.setSymbolName(symbol.getSymbolName());
    // symbol_.setSymbolWeight(symbol.getSymbolWeight());
    // symbol_.setSymbolWorth(symbol.getSymbolWorth());
}