#include <iostream>
using namespace std;

#include "RandomComputer.h"
#include "Computer.h"
#include "Player.h"

RandomComputer::RandomComputer():Computer(){
    int random=(rand()%2)+1;

    if (random==1){
        move='R';
    }
    if (random==2){
        move=='P';
    }
    if (random==3){
        move=='S';
    }

}

