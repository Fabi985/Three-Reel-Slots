#include "Symbol.h"

#include <iostream>
#include <string>

// Constructor
Symbol::Symbol() {
    symbolID_ = 0;
    symbolName_ = "NULL";
    symbolWeight_ = 0;
    symbolWorth_ = 0;
}

Symbol::Symbol(int ID, std::string name, int weight, int worth) {
    symbolID_ = ID;
    symbolName_ = name;
    symbolWeight_ = weight;
    symbolWorth_ = worth;
}

// Get 
int Symbol::getSymbolID() {
    return symbolID_;
}

std::string Symbol::getSymbolName() {
    return symbolName_;
}

int Symbol::getSymbolWeight() {
    return symbolWeight_;
}

int Symbol::getSymbolWorth() {
    return symbolWorth_;
}

// Set
void Symbol::setSymbolID(int ID) {
    symbolID_ = ID;
}

void Symbol::setSymbolName(std::string name) {
    symbolName_ = name;
}

void Symbol::setSymbolWeight(int weight) {
    symbolWeight_ = weight;
}

void Symbol::setSymbolWorth(int worth) {
    symbolWorth_ = worth;
}

void Symbol::setSymbol(Symbol symbol) {
    symbolID_ = symbol.symbolID_;
    symbolName_ = symbol.symbolName_;
    symbolWeight_ = symbol.symbolWeight_;
    symbolWorth_ = symbol.symbolWorth_;
}