#include "Mage.h"

Mage::Mage(string name, int age, int castingLevel, float mana)
    : Character(name, age), castingLevel(castingLevel), mana(mana) {
    cout << "Mage constructor called for: " << name << endl;
}

Mage::~Mage() {
    cout << "Mage destructor called for: " << getName() << endl;
}

void Mage::enchantTarget(int targetMagicRes) {
    if (mana > 0) {
        if (castingLevel > targetMagicRes) {
            cout << getName() << " successfully enchanted the target!" << endl;
        }
        else {
            cout << getName() << " failed to enchant the target!" << endl;
        }
        mana -= 10;
    }
    else {
        cout << getName() << " has no mana left!" << endl;
    }
}

float Mage::getMana() {
    return mana;
}