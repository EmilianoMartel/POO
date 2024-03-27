#include <iostream>
#include "AwesomeLibrary.h"
#include "Character.h"

using namespace std;

int main()
{
    Character characters[4];

	for (size_t i = 0; i < 4; i++)
	{
		characters[i] = Character::Character();
	}

	drawFrame(1, 1, 90,20);
	characters[0].setColor(Color::BLUE);
	characters[0].setPosition(5, 10);

	characters[1].setColor(Color::YELLOW);
	characters[1].setPosition(10, 10);

	characters[2].setColor(Color::GREEN);
	characters[2].setPosition(15, 10);

	characters[3].setColor(Color::RED);
	characters[3].setPosition(20, 10);
	
	characters[0].draw();
	characters[1].draw();
	characters[2].draw();
	characters[3].draw();

	goToCoordinates(1, 22);

    cout << "Hello World!\n";
}
