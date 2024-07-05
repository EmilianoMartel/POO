#include "Ranged.h"

Ranged::Ranged(string name, int minDistance, int maxDistance, int maxPoints, int maxStamina, int damage, int position)
	: Soldier(name, maxPoints, maxStamina, damage, position),
	minDistance(minDistance),
	maxDistance(maxDistance) {}

Ranged::~Ranged() {}