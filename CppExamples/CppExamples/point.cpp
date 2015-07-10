#include "point.h"
#include <cmath>
#include <iostream>

double Point::getOriginDistance()const
{
	return sqrt(mx * mx + my * my);
}