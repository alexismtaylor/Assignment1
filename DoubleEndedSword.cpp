//DoubleEndedSword.cpp

#include "DoubleEndedSword.h"

double DoubleEndedSword::hit(double armor) {
    int swordEnd = rand()%2 + 1;
    double damage = 0;
    if(swordEnd == 1)//used 1 sword end
    {
    	damage = hitPoints - armor;
    }
    else //used both sword ends
    {
    	damage = hitPoints*2 - armor;
    }
    return damage;
}
