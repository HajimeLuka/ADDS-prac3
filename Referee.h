#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"
#include "Player.h"

class Referee{
    public:

    Referee( ); // constructor
    char refGame(Player* player1, Player* player2);
    // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)

};

#endif
