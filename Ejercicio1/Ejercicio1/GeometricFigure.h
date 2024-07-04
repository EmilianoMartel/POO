#pragma once
#include <string>

using namespace std;
class GeometricFigure {
public:
	GeometricFigure();
	virtual ~GeometricFigure();
	virtual string getName();
};