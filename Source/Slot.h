#ifndef SLOT_H
#define SLOT_H

#include <vector>
#include "Reel.h"
#include "Symbol.h"

class Slot {
    private:
        int score;
        int tokens;

        std::vector<Reel> reels;
        std::vector<Symbol> possibleSymbols;

    public:
        Slot();
        Slot(int initialTokens);

        void setTokens(int amount);
        void addTokens(int amount);

        void spinSlot();
        void displayGrid();
        void checkWins();

        int getScore() const;
        int getTokens() const;
};

#endif