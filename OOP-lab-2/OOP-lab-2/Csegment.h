#pragma once
#include <utility>
using std::pair;
class Csegment
{
	double x1, y1, x2, y2;
public:
	Csegment(pair<pair <double, double>, pair <double, double>> segment); // Конструктор
	pair<pair <double, double>, pair <double, double>>  getSegment(void); // Гетер точки
	void setSegment(pair<pair <double, double>, pair <double, double>>  segment); // Сетер точки
};

