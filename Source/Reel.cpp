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

<<<<<<< Updated upstream
void Reel::rollReel(std::list<ReelBox> &reelBoxes) {
    srand(time(0));
    std::cout << "\n";
    std::cout << "Reel NO." << reelID_ << ": ";

    Symbol Test1 = Symbol(1, "Lemon", 70, 3);
    Symbol Test2 = Symbol(2, "Cherry", 50, 5);
    Symbol Test3 = Symbol(3, "Bell", 15, 10);
    Symbol Test4 = Symbol(4, "Seven", 5, 15);

    for (ReelBox RB : reelBoxes) {
        std::cout << "\nDEBUG>>>";
        int randomNum = rand() % 101;
        if (randomNum >= 70) {updateReelBox(RB, Test1);}
        else if (randomNum < 70 && randomNum >= 50) {updateReelBox(RB, Test2);}
        else if (randomNum < 50 && randomNum >= 15) {updateReelBox(RB, Test3);}
        else if (randomNum < 15) {updateReelBox(RB, Test4);}

        std::cout << "Box: " << RB.getReelBoxID() << RB.getReelSymbol().getSymbolName() << "\t";
        std::cout << "\n";
    }
=======
void Reel::rollReel(std::list<ReelBox> reelBoxes) {
    // TODO: rework this
>>>>>>> Stashed changes
}

void Reel::updateReelBox(ReelBox &box, Symbol &symbol) {
    box.setReelBoxSymbol(symbol);
}