#pragma once
#include "MeleeSoldier.h"

class Lancer : public MeleeSoldier {
public:
	Lancer(string name, int maxLifePoints, int maxStamina, int attackRadio, int damage, int position);
	~Lancer();
};