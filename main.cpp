#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Computer.h"
#include "Human.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Referee.h"
#include "Player.h"
#include "Tournament.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"


#include<array>

using namespace std;

int main(){

// 	Computer* player[8];
// 	Tournament tournament;
// 	char aChoice;
// 	char bChoice;

//     // Human h = Human();
//     // Bureaucrat b = Bureaucrat();
//     // Toolbox t = Toolbox();
//     // Avalanche a = Avalanche();
//     // Referee r = Referee();

//     // aChoice = h.makeMove();
//     // bChoice = h.makeMove();

    Avalanche* player1 = new Avalanche();
    Bureaucrat* player2 = new Bureaucrat();
    Toolbox* player3 = new Toolbox();
    Crescendo* player4 = new Crescendo();
    PaperDoll* player5 = new PaperDoll();
    FistFullODollars* player6= new FistFullODollars();
    Bureaucrat* player7 = new Bureaucrat();
    RandomComputer* player8 = new RandomComputer();


//     array<player *, 8>  competitors = {player1, player2 ,player3, player4, player5, player6, player7, player8};

//     tournament.run(competitors);



    Tournament tournament;

    array<player *, 8>  competitors = {player1, player2, player3, player4, player5, player6, player7, player8};
    //call run for match object
    tournament.run(competitors);


}