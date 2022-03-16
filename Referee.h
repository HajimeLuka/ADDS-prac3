#ifndef REFEREE_H
#define REFEREE_H

#include "Human.h"
#include "Computer.h"

class Referee{
    public:

    Referee( ); // constructor
    char refGame(Human player1, Computer player2);
    // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)

};

#endif
    