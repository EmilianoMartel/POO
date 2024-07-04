#pragma once
#include "GeometricFigure.h"

class Circle : public GeometricFigure {
private:
	float radius;
public:
	Circle(float radius) : radius(radius) {}
	~Circle();
	string getName();
	float getRadius();
};