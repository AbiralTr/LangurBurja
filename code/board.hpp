#include <cstdlib>
#include <string>

using namespace std;

class Board{
    private:
        int pool;
        string sections[6] = {"Crown", "Spade", "Club", "Flag", "Heart", "Diamond"};
    public:
        Board(int p);
        ~Board();
        void increasePool(int i);
        void decreasePool(int i);
        int getPool();
};

class Dice{
    private:
        string symbols[6] = {"Crown", "Spade", "Club", "Flag", "Heart", "Diamond"};
        string symbol;
    public:
        Dice(string s);
        ~Dice();
        string getSymbol();
        void roll();
};