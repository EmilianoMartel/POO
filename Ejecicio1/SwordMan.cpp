#include "SwordMan.h"

SwordMan::SwordMan(string name, int maxLifePoints, int maxStamina, int attackRadio, int damage, int position)
	: MeleeSoldier(name, maxLifePoints, maxStamina, attackRadio, damage, position) {}

SwordMan::~SwordMan() {}

void SwordMan::attack(Soldier* soldier) {

}