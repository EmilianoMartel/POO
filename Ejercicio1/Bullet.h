#pragma once
#include <iostream>

using namespace std;

class Bullet {
private:
	int x;
	int y;
	static int activeInstances;
public:
	Bullet(int x, int y);
	void show();
	void hide();
	int getX();
	int getY();
	static int getActiveInstances();
};