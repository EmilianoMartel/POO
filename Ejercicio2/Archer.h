#pragma once
#include "Character.h"

class Archer : public Character {
private:
    float attackRange;
    int arrowsCount;
public:
    Archer(string name, int age, float attackRange, int arrowsCount)
        : Character(name, age), attackRange(attackRange), arrowsCount(arrowsCount) {};

    ~Archer() {};

    void shootTarget(float distance) {};

    int getArrowsCount() {};
};