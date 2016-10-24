#include "stdafx.h"
#include "Figure.h"
using std::cin;
using std::cout;
using std::endl;
Figure::Figure(double xyz):Circle(xyz),Rectangle(xyz),square( xyz)
{
}
void Figure::Contain()
{
	if(((2 * Circle::getRadius())>=(square::getLen()))&&((2 * Circle::getRadius())>=(Rectangle::getMaxLen())))
		cout << "Circle contain other figures" << endl;
	else
		if (((square::getLen()) >= (2 * Circle::getRadius())) && ((square::getLen()) >= (Rectangle::getMaxLen())))
			cout << "Square contain other figures" << endl;
		else
			if (((Rectangle::getMinLen()) >= (2 * Circle::getRadius())) && ((Rectangle::getMinLen()) >= (square::getLen())))
				cout << "Rectangle contain other figures" << endl;
				else
				cout << "imposible" << endl;
}
