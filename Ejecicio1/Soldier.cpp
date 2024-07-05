#include "Soldier.h"
Soldier::Soldier(string name, int maxLifePoints, int maxStamina, int damage, int position)
	: maxLifePoints(maxLifePoints),
	currentLifePoints(maxLifePoints),
	maxStamina(maxStamina),
	currentStamina(maxStamina),
	damage(damage),
	name(name),
	position(position) {}

Soldier::~Soldier() {}

void Soldier::attack(vector<Soldier*> enemies) {
	cout << "Not implemented";
}

int Soldier::getPosition() {
	return position;
}

bool Soldier::canAttack() {
	if (currentStamina > 0)
		return true;

	rest();
	return false;
}

void Soldier::takeDamage(int damage) {
	currentLifePoints -= damage;
}

void Soldier::rest() {
	currentStamina = maxStamina;
}

bool Soldier::isAlive() {
	if (currentLifePoints <= 0)
		return false;

	return true;
}