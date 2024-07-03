#include "AwesomeLibrary.h"
#include <iostream>
#include <vector>
#include "Bullet.h"

int main()
{
    Bullet bullet1 = Bullet(2,5);
    Bullet bullet2 = Bullet(4, 5);
    Bullet bullet3 = Bullet(5, 9);

    vector<Bullet> bullets = { bullet1, bullet2, bullet3 };
    drawFrame(1, 1, 10, 10);
    goToCoordinates(bullet1.getX(),bullet1.getY());
    bullet1.show();
    goToCoordinates(bullet2.getX(), bullet2.getY());
    bullet2.show();
    goToCoordinates(bullet3.getX(), bullet3.getY());
    bullet3.show();

    while (!bullets.empty()) {
        _getch();

        Bullet& bullet = bullets.back();
        goToCoordinates(bullet.getX(), bullet.getY());
        cout << ' ';

        bullets.pop_back();

        goToCoordinates(12, 1);
        std::cout << "Balas activas: " << bullets.size();
    }

    _getch();

    return 0;
}