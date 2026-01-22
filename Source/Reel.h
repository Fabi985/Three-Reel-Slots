#ifndef REEL_H
#define REEL_H

#include "ReelBox.h"
#include "Symbol.h"

#include <list>

class Reel {
    private:
        std::list<ReelBox> reelBoxesList;
        std::list<Symbol> symbolsList;

    public:
        Reel();
        Reel(std::list<ReelBox> reelBoxesList, std::list<Symbol> symbolsList);
        
        std::list<ReelBox> getReelBoxList();
        std::list<Symbol> getSymbolsList();

        void addReelBox(ReelBox box);
        void addSymbol(Symbol symbol);

        void rollReel(std::list<ReelBox> reelBoxesList);
};

#endif