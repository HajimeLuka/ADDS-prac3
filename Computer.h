#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

#include <string>

using namespace std;

class Computer: public Player{

    protected:
    char move;
    char move2; 
    char move3; 
    char move4;
    char move5;

    public:
    Computer();
    int number;

    char makeMove();




};

#endif