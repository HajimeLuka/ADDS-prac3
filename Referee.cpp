#include <iostream>
#include "Referee.h"


Referee::Referee(){


}

// char Referee::refGame(player player1, player player2, int num){
//     char aChoice = player1.makeMove(num);
//     char bChoice = player2.makeMove(num);

char Referee::refGame(char aChoice, char bChoice){



    // cout<<aChoice<<endl;
    // cout<<bChoice<<endl;

    if (aChoice == 'R' && bChoice == 'R'){
        return 'T';
    }
       else if (aChoice == 'P' && bChoice == 'R'){
        return 'W';
    }
       else if (aChoice=='S' && bChoice=='R'){
        return 'L';
    }
           else if (aChoice=='R' && bChoice=='P'){
        return 'L';
    }
           else if (aChoice=='P' && bChoice=='P'){
        return 'T';
    }
           else if (aChoice=='S' && bChoice=='P'){
        return 'W';
    }
           else if (aChoice=='R' && bChoice=='S'){
        return 'W';
    }
           else if (aChoice=='P' && bChoice=='S'){
        return 'L';
    }
           else if (aChoice=='S' && bChoice=='S'){
        return 'T';
    }
    else {
        return 'Z';
    }
}

