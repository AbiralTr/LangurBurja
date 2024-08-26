#include <cstdlib>
#include <iostream>
#include "board.hpp"
#include "player.hpp"

void generateDice(Dice list[]){
    for(int i = 0; i < 6; i++){
        Dice newDice = Dice();
        list[i] = newDice;
    }
};

void printDiceList(Dice list[]){
    for(int i = 0; i < 6; i++){
        std::cout << i << ": " << list[i].getSymbol() << std::endl;
    }
};

int main(){

    // Test Board
    int pot = 100;
    Board b1 = Board(pot);
    std::cout << "Pot: " << b1.getPool() << std::endl;

    // Test Dice
    Dice diceList[6];
    generateDice(diceList);
    printDiceList(diceList);

    return 0;
};