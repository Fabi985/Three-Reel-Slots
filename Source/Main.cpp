#include "Slot.h"
#include "Reel.h"
#include "ReelBox.h"
#include "Symbol.h"

#include <iostream>

int main() {
    Symbol lemon = Symbol(1, "Lemon", 70, 2);
    Symbol cherry = Symbol(2, "Cherry", 50, 4);
    Symbol bell = Symbol(3, "Bell", 15, 10);
    Symbol seven = Symbol(4, "Seven", 5, 15);

    Slot slotMachine1 = Slot();

    slotMachine1.addSymbol(lemon);
    slotMachine1.addSymbol(cherry);
    slotMachine1.addSymbol(bell);
    slotMachine1.addSymbol(seven);

    slotMachine1.spinSlot();
    return 0;
}