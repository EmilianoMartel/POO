#pragma once
#include <iostream>

class Star
{
private:
	int x;
	int y;
public:
	Star(int x, int y);
	void show();
	void hide();
	void move(int x, int y);
	void printCoordinates();
	int getX();
	int getY();
};
