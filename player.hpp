#pragma once
#include <cstdlib>
#include "board.hpp"

class Player{
    private:
        int money = 0;
        Board board;
    public:
        Player(Board b);
        ~Player();
        int getMoney();
        void deposit(int i);
        void withdraw(int i);
};