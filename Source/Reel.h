#ifndef REEL_H
#define REEL_H

#include "ReelBox.h"
#include "Symbol.h"

#include <list>

class Reel {
    private:
        int reelID_;
        ReelBox box1;
        ReelBox box2;
        ReelBox box3;

        std::list<ReelBox> reelBoxesList;
        std::list<Symbol> symbolsList;

    public:
        Reel();
        Reel(int ID);
        Reel(std::list<ReelBox> reelBoxesList);
        
        std::list<ReelBox> &getReelBoxList();
        int getReelID();
        
        void setupReel();

        void addReelBox(ReelBox box);

        void rollReel(std::list<ReelBox> &reelBoxesList);

        void updateReelBox(ReelBox &box, Symbol &symbol);
};

#endif