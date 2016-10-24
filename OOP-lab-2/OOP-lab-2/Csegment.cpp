#include "stdafx.h"
#include "Csegment.h"
#include <utility>

using std::make_pair;

// Конструктор
Csegment::Csegment(pair<pair <double, double>, pair <double, double>> segment) {
	setSegment(segment);
}

// Гетер точки
pair<pair <double, double>, pair <double, double>> Csegment::getSegment(void) {
	return make_pair(make_pair(x1,y1), make_pair(x2, y2));
}

// Сетер точки
void Csegment::setSegment(pair<pair <double, double>, pair <double, double>> segment) {
	x1 = segment.first.first;
	y1 = segment.first.second;
	x2 = segment.second.first;
	y2 = segment.second.second;
}