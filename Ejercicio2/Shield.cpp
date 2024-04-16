#include "Shield.h"

Shield::Shield(string name, float armor) {
	this->name = name;
	this->armor = armor;
}

string Shield::getName() {
	return name;
}

float Shield::getArmor() {
	return armor;
}