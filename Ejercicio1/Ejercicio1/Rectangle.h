#pragma once
#include "GeometricFigure.h"

class Rectangle : public GeometricFigure {
private:
	float length;
	float width;
public:
	Rectangle(float length, float width) :length(length), width(width) {}
	~Rectangle();
	string getName();
	float getLength();
	float getWidth();
};