#include "CrazyRandomSword.h"

double CrazyRandomSword::getHP() {
   double hp;
   srand(time(NULL));
   hp = rand() % 91 + 10;
   return hp;
}

double CrazyRandomSword::hit(double armor) {
   double damage;
   int ignored, half = armor/2;
   srand(time(NULL));
   ignored = rand() % half;
   damage = hitPoints - (armor - ignored);
   if (damage < 0)
	return 0;
   return damage;
}
