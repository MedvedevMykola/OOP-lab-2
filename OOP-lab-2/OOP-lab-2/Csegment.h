#pragma once
#define M_PI       3.14159265358979323846 
#include <iostream>
using std::cin;
using std::cout;
class Csegment
{
protected:
	double x;
public:
	Csegment(double xyz); // �����������
	double getSegment() { return x; }; // ����� �����
	void setSegment(double x1) { x = x1; }; // ����� �����
};

