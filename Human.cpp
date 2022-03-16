#include <iostream>
#include "Human.h"

using namespace std; 

Human::Human(){

}


char Human::makeMove(){
 
 cout << "Enter Move: ";
 cin>>move;
 return move;
 
}