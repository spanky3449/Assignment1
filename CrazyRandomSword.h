#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:
   CrazyRandomSword() : Weapon("Crazy random sword", getHP()) {
   }

   double getHP();

   virtual ~CrazyRandomSword() {};

   virtual double hit(double armor);

};

#endif
