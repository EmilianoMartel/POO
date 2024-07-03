#pragma once
#include "Character.h"

class Mage : public Character {
private:
    int castingLevel;
    float mana;
public:
    Mage(string name, int age, int castingLevel, float mana)
        : Character(name, age), castingLevel(castingLevel), mana(mana) {};

    ~Mage() {};

    void enchantTarget(int targetMagicRes) {};

    float getMana() {};
};