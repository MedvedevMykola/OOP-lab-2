#include "stdafx.h"
#include "square.h"


square::square(double xyz):Csegment(xyz)
{
	cout << "Enter Lenth: ";
	cin >> len;
}
double square::getLen()
{
	return len;
}
double square::getSquare()
{
	return pow(len,2);
}

