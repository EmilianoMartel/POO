#pragma once
#include "Soldier.h"

class MeleeSoldier :public Soldier {
protected:
	int attackRadio;
	bool haveExtraAttack;

public:
	MeleeSoldier(string name, int maxLifePoints, int maxStamina, int attackRadio, int damage, int position);
	virtual ~MeleeSoldier();
	bool isInRange(Soldier* soldier);
	virtual void attack(vector<Soldier*> enemies);
};