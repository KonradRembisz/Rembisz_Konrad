#include <iostream>
#include "statistics.h"


Statistics::Statistics(int x, int y){
    this->x = x;
    this->y = y;
}

Statistics::Statistics(Statistics const & kopia){
    this->x = kopia.x;
    this->y = kopia.y;
}

Statistics::~Statistics(){
    
}

int Statistics::accessX(){
    return x;
}

int Statistics::accessY(){
    return y;
}

float Statistics::dodaj(){
    return x+y;
}

float Statistics::odejmij(){
    return x-y;
}