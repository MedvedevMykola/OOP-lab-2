#include "stdafx.h"
#include "Rectangle.h"



Rectangle::Rectangle(double xyz):Csegment(xyz)
{
	cout << "Enter Lenth1: ";
	cin >> len1;
	
	cout << "Enter Lenth2: ";
	cin >> len2;
}
double Rectangle::getMinLen()
{
	if(len1>=len2)
	return len2;
	else
		return len1;
}
double Rectangle::getMaxLen()
{
	if (len1 >= len2)
		return len1;
	else
		return len2;
}
double Rectangle::getSquare()
{
	return len1*len2;
}