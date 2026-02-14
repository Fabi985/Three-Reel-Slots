#ifndef SLOT_H
#define SLOT_H

#include <vector>
#include "Reel.h"
#include "Symbol.h"

class Slot {
    private:
    // User score and tokens that they have inserted
        int score;
        int tokens;

        std::vector<Reel> reels;                // This is what we are looping  
        std::vector<Symbol> possibleSymbols;    // The possible symbols for this specific slot machine will be defined in the slot

    public:
        Slot();                     // Initialize the slot machine here, including the reels and possible symbols

        void addTokens(int amount); // Allow the user to insert any amount of tokens

        void spinSlot();            // loops through the reels 
        void displayGrid();         // Displays the reels 
        void checkWins();           // Check for any wins 

        // Getters
        int getScore() const;
        int getTokens() const;
};

#endif