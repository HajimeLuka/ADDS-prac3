#include <iostream>
#include "Computer.h"
#include <string>
#include <stdlib.h>
#include "Player.h"
using namespace std;

Computer::Computer():player(){


}


char Computer::makeMove(){
    if (number==1){
        return move;
    }
        if (number==2){
        return move2;
    }
        if (number==3){
        return move3;
    }
        if (number==4){
        return move4;
    }
        if (number==5){
        return move5;
    }
    
}

