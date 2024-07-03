#include "Archer.h"

Archer::Archer(string name, int age, float attackRange, int arrowsCount)
    : Character(name, age), attackRange(attackRange), arrowsCount(arrowsCount) {
    cout << "Archer constructor called for: " << name << endl;
}

Archer::~Archer() {
    cout << "Archer destructor called for: " << getName() << endl;
}

void Archer::shootTarget(float distance) {
    if (arrowsCount > 0) {
        if (distance <= attackRange) {
            cout << getName() << " successfully hit the target!" << endl;
        }
        else {
            cout << getName() << " missed the target!" << endl;
        }
        arrowsCount--;
    }
    else {
        cout << getName() << " has no arrows left!" << endl;
    }
}

int Archer::getArrowsCount() {
    return arrowsCount;
}