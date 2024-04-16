#pragma once
#include <string>

using namespace std;

class Sword {
private:
	string name;
	float damage;
public:
	Sword(string name, float damage);
	string getName();
	float getDamage();
};