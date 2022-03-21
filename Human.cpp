#include <iostream>
#include "Human.h"
#include "Player.h"
using namespace std;

Human::Human():player(){

}


char Human::makeMove(int num){

 cout << "Enter Move: ";
 cin>>move;
 return move;

}