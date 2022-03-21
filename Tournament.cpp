#include <iostream>
#include "Tournament.h"
#include "Referee.h"
#include "Player.h"
#include <array>

using namespace std;

Tournament::Tournament(){

}

player * Tournament::run(array<player*, 8>  competitors){

    int p1Count=0;
    int p2Count=0;

    Referee ref; //determines who wins the round

    char res;
    int matchRes;
    char aChoice;
    char bChoice;

    for (int j=0; j<4; j++){
        res = ref.refGame(competitors[0],competitors[1]);

        for (int i=0; i<5; i++){

            if (res=='W'){
                p1Count++;
            }
            else if(res=='L'){
                p2Count++;
            }
            else{

                p1Count=p1Count;
                p2Count=p2Count;
            }

        }
        if (p1Count>p2Count){
            matchRes=1;
        }
        if (p1Count<p2Count){
            matchRes=2;
        }
        if (p1Count==p2Count){
            matchRes=1;
        }

    }




}