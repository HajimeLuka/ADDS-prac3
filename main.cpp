#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"

#include <string>

using namespace std;

int main(){

    Human h = Human();
    Bureaucrat b = Bureaucrat();
    Toolbox t = Toolbox();
    Avalanche a = Avalanche();
    Referee r = Referee();

    cout << r.refGame(h,t) << endl;

}