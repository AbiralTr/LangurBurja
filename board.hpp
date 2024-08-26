#pragma once
#include <cstdlib>
#include <string>

using namespace std;

class Player;

class Board{
    private:
        int pot = 0;
        string sections[6] = {"Crown", "Spade", "Club", "Flag", "Heart", "Diamond"};
    public:
        Board(int p);
        Board();
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