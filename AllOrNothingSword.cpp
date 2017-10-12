#include "AllOrNothingSword.h"

double AllOrNothingSword::hit(double armor) {
   int armorRounded = armor;
   if (armorRounded % 2 == 0)
	return hitPoints;
   else
	return 0;
}
