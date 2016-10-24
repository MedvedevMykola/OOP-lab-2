#include "stdafx.h"
#include "Circle.h"


Circle::Circle(double xyz):Csegment(xyz)
{
	cout << "Enter Radius: ";
	cin >> radius;
}
double Circle::getRadius()
{
	return radius;
}
double Circle::getSquare()
{
	return (M_PI * pow(radius, 2));
}
