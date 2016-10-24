#pragma once
#include "Csegment.h"
#include <math.h>

class Rectangle: public Csegment
{
protected:
	double len1,len2;
public:
	Rectangle(double xyz);
	double getMinLen();
	double getMaxLen();
	double getSquare();
};

