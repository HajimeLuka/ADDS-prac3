#include <iostream>
#include "Human.h"
#include "Player.h"
using namespace std;

Human::Human():Player(){

}


char Human::makeMove(){

 cout << "Enter Move: ";
 cin>>move;
 return move;

}