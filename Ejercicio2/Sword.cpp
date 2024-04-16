#include "Sword.h"

Sword::Sword(string name, float damage) {
	this->name = name;
	this->damage = damage;
}

string Sword::getName() {
	return name;
}

float Sword::getDamage() {
	return damage;
}