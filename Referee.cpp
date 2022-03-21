#include <iostream>
#include "Referee.h"


Referee::Referee(){


}

// char Referee::refGame(player player1, player player2, int num){
//     char aChoice = player1.makeMove(num);
//     char bChoice = player2.makeMove(num);

char Referee::refGame(player* player1, player* player2){



    // cout<<aChoice<<endl;
    // cout<<bChoice<<endl;

    if (player1->makeMove() == 'R' && player2->makeMove() == 'R'){
        return 'T';
    }
       else if (player1->makeMove() == 'P' && player2->makeMove() == 'R'){
        return 'W';
    }
       else if (player1->makeMove()=='S' && player2->makeMove()=='R'){
        return 'L';
    }
           else if (player1->makeMove()=='R' && player2->makeMove()=='P'){
        return 'L';
    }
           else if (player1->makeMove()=='P' && player2->makeMove()=='P'){
        return 'T';
    }
           else if (player1->makeMove()=='S' && player2->makeMove()=='P'){
        return 'W';
    }
           else if (player1->makeMove()=='R' && player2->makeMove()=='S'){
        return 'W';
    }
           else if (player1->makeMove()=='P' && player2->makeMove()=='S'){
        return 'L';
    }
           else if (player1->makeMove()=='S' && player2->makeMove()=='S'){
        return 'T';
    }
    else {
        return 'Z';
    }
}

