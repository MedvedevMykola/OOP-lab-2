#include "stdafx.h"
#include "Figure.h"
#include <iostream>

int main()
{
	int t;
	printf("Menu:\n1. Start program\n2. Exit\n\nMake your choice ");
	cin >> t;
	switch (t) {
	case 1: {
		
		Figure obj(1);

		printf("Square of s: %Lf\n", obj.square::getSquare());
		printf("Square of c: %Lf\n", obj.Circle::getSquare());
		printf("Square of r: %Lf\n\n", obj.Rectangle::getSquare());
		obj.Contain();
		system("pause");
		break;
	}
	case 2: return false;
	}

	return true;
}


