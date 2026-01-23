#ifndef REEL_H
#define REEL_H

#include "ReelBox.h"
#include "Symbol.h"

#include <list>

class Reel {
    private:
        ReelBox box1;
        ReelBox box2;
        ReelBox box3;

        std::list<ReelBox> reelBoxesList;

    public:
        Reel();
        Reel(std::list<ReelBox> reelBoxesList);
        
        std::list<ReelBox> getReelBoxList();
        
        void addReelBox(ReelBox box);

        void rollReel(std::list<ReelBox> reelBoxesList);

        void updateReelBox(ReelBox box);
};

#endif