#include "MeleeSoldier.h"

MeleeSoldier::MeleeSoldier(string name, int maxLifePoints, int maxStamina, int attackRadio, int damage, int position)
	: Soldier(name,maxLifePoints, maxStamina, damage, position),
	attackRadio(attackRadio) {}

MeleeSoldier::~MeleeSoldier() {}

bool MeleeSoldier::isInRange(Soldier* soldier) {
	int diff = position - soldier->getPosition();

	if (diff < 0)
		diff *= -1;

	diff *= 5;

	if (diff <= attackRadio)
		return true;

	return false;
}

void MeleeSoldier::attack(vector<Soldier*> enemies) {
	currentStamina--;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, enemies.size() - 1);

	int soldierToAttack = dis(gen);

	if (canAttack() && isInRange(enemies[soldierToAttack])) {
		do
		{
			enemies[soldierToAttack]->takeDamage(damage);
		} while (haveExtraAttack && canAttack());
	}
}