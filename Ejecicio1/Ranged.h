#pragma once
#include "Soldier.h"

class Ranged : public Soldier {
protected:
	int minDistance;
	int maxDistance;
public:
	Ranged(string name, int minDistance, int maxDistance, int maxPoints, int maxStamina, int damage, int position);
	virtual ~Ranged();
};