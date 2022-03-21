#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <iostream>
#include <string>
#include "Player.h"
#include <array>

using namespace std;

class Tournament{
    public:
    Tournament();
    player * run(array<player , 8>  competitors); 
    int p1Count;
    int p2Count;

    // int p3Count;
    // int p4Count;
    // int p5Count;
    // int p6Count;
    // int p7Count;
    // int p8Count;


};

#endif