#include "board.hpp"

// Board Definitions

Board::Board(int p){
    pot = p;
};

Board::~Board(){}

void Board::increasePool(int i, Player p){
    pot += i;
    p.withdraw(i);
};

void Board::decreasePool(int i, Player p){
    pot -= i;
    p.deposit(i);
};

int Board::getPool(){
    return pot;
};

// Dice Defintions

Dice::Dice(){
    roll();
};

Dice::~Dice(){

};

string Dice::getSymbol()
{
    return symbol;
}

void Dice::roll(){
    int random = rand() % 5;         // v1 in the range 0 to 99
    symbol = symbols[random];
};


