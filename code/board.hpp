#pragma once
#include <cstdlib>
#include <string>
#include "player.cpp"

using namespace std;

class Board{
    private:
        int pot;
        string sections[6] = {"Crown", "Spade", "Club", "Flag", "Heart", "Diamond"};
    public:
        Board(int p);
        ~Board();
        void increasePool(int i, Player p);
        void decreasePool(int i, Player p);
        int getPool();
};

class Dice{
    private:
        string symbols[6] = {"Crown", "Spade", "Club", "Flag", "Heart", "Diamond"};
        string symbol;
    public:
        Dice();
        ~Dice();
        string getSymbol();
        void roll();
};