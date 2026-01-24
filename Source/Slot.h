#ifndef SLOT_H
#define SLOT_H

#include "Reel.h"
#include "ReelBox.h"
#include "Symbol.h"

#include <list>

class Slot {
    private:
        int score_;
        int token_;
        int return_;

        Reel reel1;
        Reel reel2;
        Reel reel3;

        std::list<Reel> ReelList; 
        std::list<Symbol> SlotSymbolsList;

    public:
        Slot();

        std::list<Reel> getReelList();
        std::list<Symbol> getSymbolsList();
        
        void addSymbol(Symbol symbol);
        void spinSlot(std::list<Symbol> SlotSymbolsList);
        void getScore(std::list<Reel> ReelList);
        void slotOutput();
};

#endif