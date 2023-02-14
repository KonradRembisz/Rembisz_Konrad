#include <iostream>
#include "sequence.h"


Sequence::Sequence(int x, int y){
    this->x = x;
    this->y = y;
}

Sequence::Sequence(Sequence const & kopia){
    this->x = kopia.x;
    this->y = kopia.y;
}

Sequence::~Sequence(){
    
}

int Sequence::accessX(){
    return x;
}

int Sequence::accessY(){
    return y;
}
float Sequence::dodaj(){
    return x+y;
}

float Sequence::odejmij(){
    return x-y;
}