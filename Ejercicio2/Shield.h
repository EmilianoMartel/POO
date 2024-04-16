#pragma once
#include <string>

using namespace std;

class Shield {
private:
	string name;
	float armor;
public:
	Shield(string name, float armor);
	string getName();
	float getArmor();
};