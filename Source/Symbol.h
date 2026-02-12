#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>

class Symbol {
    private:
        std::string name;
        int value;

    public:
        Symbol();

        Symbol(std::string symbolName, int symbolValue);

        std::string getName() const;
        int getValue() const;

        bool operator==(const Symbol& other) const;
};
#endif