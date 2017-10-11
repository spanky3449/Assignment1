#include <string>
#include "Weapon.h"

#ifndef ALLORNOTHINGSWORD_H
#define ALLORNOTHINGSWORD_H

class AllOrNothingSword : public Weapon{
public:
   AllOrNothingSword() : Weapon("All or nothing sword", 1000) {
   }
   virtual ~AllOrNothingSword() {};
   virtual double hit(double armor);
};

#endif
