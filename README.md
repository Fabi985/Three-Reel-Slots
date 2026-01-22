# Three-Reel-Slots
 Three reel slots in C++


# Programs design
![alt txt](/README_images/fuckass.drawio.png)

## Slot:
``` C++
list<Reel> reelList;
```

## Reel:
``` C++
list<ReelBox> reelBoxesList;
list<symbol> symbolsList;
```

## ReelBox:
``` C++
int reelBoxID_;
Symbol symbol_;
```

## Symbol:
``` C++
int symbolID_;
std::string symbolName_;
int symbolWeight_;
int symbolWorth_;
```