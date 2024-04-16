#include <iostream>
#include "Knight.h"
#include "Shield.h"
#include "Sword.h"
#include "Library.h"

using namespace std;

int main()
{
    Knight knight1 = Knight("Arturo",100,10,10);
    Knight knight2 = Knight("Juana de Arco", 150, 20, 5);
    Sword sword1 = Sword("Excalibur", 20);
    Sword sword2 = Sword("Espada de Juana de Arco",15);
    Shield shield1 = Shield("Ancile", 10);

    knight1.setShield(shield1);
    knight1.setSword(sword1);

    knight2.setSword(sword2);

    do
    {
        knight1.attack(knight2);
        knight2.attack(knight1);
        miliSleep(1000);
    } while (knight1.isAlive() || knight2.isAlive());
}