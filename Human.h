#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Player.h"

using namespace std;

class Human:public player{

    public: //constructor
    Human();
    char makeMove(int num);

    protected:
    char move;
    char move2;
    char move3;
    char move4;
    char move5;

};

#endif