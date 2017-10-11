#include "AllOrNothingSword.cpp"

double AllOrNothingSword::hit(double armor) {
   if (armor % 2 == 0)
	return hitPoints;
   else
	return 0;
}
