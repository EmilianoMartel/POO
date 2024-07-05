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