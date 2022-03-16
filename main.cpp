#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <string>
using namespace std;

int main(){

    Human a = Human();
    Computer b = Computer();
    Referee c = Referee();

    cout << c.refGame(a,b) << endl;

}