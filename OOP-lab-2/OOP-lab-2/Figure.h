#pragma once
#include "Rectangle.h"
#include "Circle.h"
#include "square.h"
#include <iostream>
class Figure:public square,public Rectangle,public Circle
{
public:
	Figure(double xyz);
	void Contain();
};

