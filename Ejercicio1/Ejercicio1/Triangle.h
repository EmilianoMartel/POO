#pragma once
#include "GeometricFigure.h"
class Triangle :public GeometricFigure {
private:
	float base;
	float height;
public:
	Triangle(float base, float height) : base(base), height(height){}
	~Triangle() {}
	string getName();
	float getBase();
	float getHeight();
};