#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>

class Symbol {
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
};

#endif