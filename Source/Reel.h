#ifndef REEL_H
#define REEL_H 

#include <vector> 
#include "Symbol.h" 

class Reel { 
    private:
        std::vector<Symbol> visibleSymbols; // A list for the Top, middle and bottom rows
    
    public:
        Reel();

        void spin();
        void updateReel(const std::vector<Symbol>& newSymbols); // Updates the entire reels by going through them in a for loop
        void setSymbol(int row, Symbol newSymbol);              // This allows us to update the symbol on a specific row

        // Getters
        Symbol getSymbolAtRow(int row) const;
}; 
#endif