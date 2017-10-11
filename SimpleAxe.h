#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

class SimpleAxe : public Weapon {
public:
   SimpleAxe() : Weapon("Simple axe", 60) {
   }
   virtual ~SimpleAxe() {};
   virtual double hit(double armor);

};

#endif
