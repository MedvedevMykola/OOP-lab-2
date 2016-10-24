#pragma once
#include "Csegment.h"
#include <math.h>

class square: public Csegment
{
protected:
	double len;
public:
	square(double xyz);
	double getLen();
	double getSquare();
};

