#ifndef __SEQUENCE_H__
#define __SEQUENCE_H__

#include <iostream>


class Sequence{
public:
    
    Sequence(int x, int y);
    
    Sequence(Sequence kopia);
    
    ~Sequence();
    
    int accessX();
    
    int accessY();
    
    float dodaj();

    float odejmij();
private:
    int x, y;
}

#endif
