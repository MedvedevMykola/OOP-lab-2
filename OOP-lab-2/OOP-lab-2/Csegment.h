#pragma once
#include <utility>
using std::pair;
class Csegment
{
	double x1, y1, x2, y2;
public:
	Csegment(pair<pair <double, double>, pair <double, double>> segment); // �����������
	pair<pair <double, double>, pair <double, double>>  getSegment(void); // ����� �����
	void setSegment(pair<pair <double, double>, pair <double, double>>  segment); // ����� �����
};

