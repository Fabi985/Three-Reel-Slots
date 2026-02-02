# Compiler code
*This is only for me incase i forget how to compile my own code*

>Compile:
```
g++ Main.cpp Reel.cpp ReelBox.cpp Slot.cpp Symbol.cpp -o slots
```

>Run:
```
./slots
```

# Three-Reel-Slots
 Three reel slots in C++.
 This is mainly going to be used for me to explain my thought process and plan the project somewhat.

# Programs design
![alt txt](/README_images/SlotMachineDiagram.drawio.png)


* *Image no longer valid as i may have added/removed some variables*


***I believe I need to add the symbolsList in Slot instead of Reel***

## Slot:
``` C++
private:
    int score_;
    int token_;
    int return_;

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
```

## Reel:
``` C++
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
```

## ReelBox:
``` C++
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
```

## Symbol:
``` C++
private:
    int symbolID_;
    std::string symbolName_;
    int symbolWeight_;
    int symbolWorth_;

public:
    Symbol();
    Symbol(int symbolID, std::string symbolName, int symbolWeight, int symbolWorth);

    int getSymbolID();
    std::string getSymbolName();
    int getSymbolWeight(); 
    int getSymbolWorth();

    void setSymbolID(int ID);
    void setSymbolName(std::string name);
    void setSymbolWeight(int weight);
    void setSymbolWorth(int worth);
    void setSymbol(int ID, std::string name, int weight, int worth);
```
