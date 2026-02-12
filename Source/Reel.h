#ifndef REEL_H
#define REEL_H 

#include <vector> 
#include "Symbol.h" 

class Reel { 
    private:
        std::vector<Symbol> visibleSymbols;
    
    public:
        Reel();

        void spin();
        void updateReel(const std::vector<Symbol>& newSymbols); 
        void setSymbol(int column);

        Symbol getSymbolAtRow(int row) const;
}; 
#endif