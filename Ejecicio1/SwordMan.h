#pragma once
#include "MeleeSoldier.h"

class SwordMan : public MeleeSoldier {
public:
	SwordMan(string name, int maxLifePoints, int maxStamina, int attackRadio, int damage, int position);
	~SwordMan();
	void attack(Soldier* soldier);
};