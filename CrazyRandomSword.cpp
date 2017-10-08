//CrazyRandomSword.cpp

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
   if(armor == 0)
   {
   		return 0.0;
   }

    int damage = hitPoints - (armor / 2); //half of the armor the weapon hits
    int ranNum = (rand() % damage); //ignore this amount of armor points

    return hitPoints - ranNum;
    
}