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
std::list<ReelBox> Reel::getReelBoxList() {
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

void Reel::rollReel(std::list<ReelBox> reelBoxes) {
    for (ReelBox& rb : reelBoxes) {
        int randomNum = rand() % 101;
        boxPercentages(randomNum, rb);
    }
}

void Reel::boxPercentages(int randomNum, ReelBox rb) {
    // No need for these just remembered
    Symbol lemon = Symbol(1, "Lemon", 50, 3);
    Symbol cherry = Symbol(2, "Cherry", 25, 5);
    Symbol seven = Symbol(3, "Seven", 5, 7);
    if (randomNum >= 50) {updateReelBox(rb, lemon);}
    else if (randomNum < 50 || randomNum >= 25) {updateReelBox(rb, cherry);}
    else if (randomNum < 25 || randomNum >= 0) {updateReelBox(rb, seven);}
}

void Reel::updateReelBox(ReelBox box, Symbol symbol) {
    // pointer work needs redoing
    std::cout << "\nupdating " << box.getReelBoxID() << " to " << symbol.getSymbolID();
    box.setReelBoxSymbol(symbol);
}