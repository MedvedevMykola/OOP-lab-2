#pragma once
#include "Csegment.h"
#include <math.h>
class Circle:public Csegment
{
protected:
	double radius;
public:
	Circle(double xyz);
	double getRadius(); 
	double getSquare(); 
};

