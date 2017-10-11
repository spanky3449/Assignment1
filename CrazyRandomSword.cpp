#include "CrazyRandomSword.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double CrazyRandomSwordgetHP() {
   double hp;
   srand(time(NULL));
   hp = rand() % 91 + 10;
   return hp;
}

double CrazyRandomSword::hit(double armor) {
   double ignored, damage;
   srand(time(NULL));
   ignored = rand() % armor/2;
   damage = hitpoints - (armor - ignored);
   if (damage < 0)
	return 0;
   return damage;
}
