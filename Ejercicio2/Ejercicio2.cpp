#include <iostream>
#include "Archer.h"
#include "Mage.h"
using namespace std;

int main()
{
    Archer archer("Robin", 30, 50.0f, 10);
    Mage mage("Gandalf", 100, 70, 100.0f);

    cout << "\nArcher attempts to shoot a target at 40.0 units distance:" << endl;
    archer.shootTarget(40.0f);
    cout << "Arrows left: " << archer.getArrowsCount() << endl;

    cout << "\nMage attempts to enchant a target with 50 magic resistance:" << endl;
    mage.enchantTarget(50);
    cout << "Mana left: " << mage.getMana() << endl;

    cout << "\nArcher attempts to shoot a target at 60.0 units distance:" << endl;
    archer.shootTarget(60.0f);
    cout << "Arrows left: " << archer.getArrowsCount() << endl;

    cout << "\nMage attempts to enchant a target with 80 magic resistance:" << endl;
    mage.enchantTarget(80);
    cout << "Mana left: " << mage.getMana() << endl;

    return 0;
}