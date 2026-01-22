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
        std::list<Reel> ReelList; 

    public:
        Slot();
        void SpinSlot();
};

#endif