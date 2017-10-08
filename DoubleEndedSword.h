//DoubleEndedSword.h

#include <string>
#include "Weapon.h"
#include <stdlib.h>
#include <ctime>

#ifndef DoubleEndedSword_H
#define DoubleEndedSword_H


class DoubleEndedSword : public Weapon {
public:

    DoubleEndedSword() : Weapon("Double Ended Sword", 50.0) {
    }
    virtual ~DoubleEndedSword() {}; 
    virtual double hit(double armor);

};

#endif /* DoubleEndedSword_H */
