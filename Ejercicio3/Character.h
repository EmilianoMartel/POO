#pragma once
#include <iostream>
#include "AwesomeLibrary.h"

class Character {
private:
	int x;
	int y;
	Color color;
public:
	Character();
	~Character();
	void setPosition(int x, int y);
	void setColor(Color color);
	void draw();
};