#include <iostream>
#include "Referee.h"


Referee::Referee(){


}

char Referee::refGame(Human player1, Computer player2){
    char hChoice = player1.makeMove();
    char cChoice = player2.makeMove();

    if (hChoice == 'R' && cChoice == 'R'){
        return 'T';
    }
       else if (hChoice == 'P' && cChoice == 'R'){
        return 'W';
    }
       else if (hChoice=='S' && cChoice=='R'){
        return 'L';
    }
           else if (hChoice=='R' && cChoice=='P'){
        return 'L';
    }
           else if (hChoice=='P' && cChoice=='P'){
        return 'T';
    }
           else if (hChoice=='S' && cChoice=='P'){
        return 'W';
    }
           else if (hChoice=='R' && cChoice=='S'){
        return 'W';
    }
           else if (hChoice=='P' && cChoice=='S'){
        return 'L';
    }
           else if (hChoice=='S' && cChoice=='S'){
        return 'T';
    }
    else {
        return 'Z';
    }
}

