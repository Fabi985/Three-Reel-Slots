#ifndef REELBOX_H
#define REELBOX_H

#include "Symbol.h"

class ReelBox {
    private:
        int reelBoxID_;
        Symbol symbol_;

    public:
        ReelBox();
        ReelBox(int ID, Symbol symbol);

        int getReelBoxID();
        Symbol getReelSymbol();

        void setReelBoxID(int ID);
        void setReelBoxSymbol(Symbol symbol);
        void setReelBox(int ID, Symbol symbol);
    
};

#endif