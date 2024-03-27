#include <iostream>
#include <Windows.h>
#include <sstream>
#include <conio.h>
#include "Star.h"
#include "AwesomeLibrary.h"

using namespace std;

void printFunction() {
	drawFrame(1, 5, 50, 20);
	cout << endl;
	cout << endl;
}

void printStar(Star star, bool isShowing) {
	goToCoordinates(star.getX(), star.getY());
	if (isShowing) {
		star.show();
	}
	else {
		star.hide();
	}
}

int main()
{
	string asd;
	Star star1 = Star::Star(10, 6);
	Star star2 = Star::Star(46, 8);
	Star star3 = Star::Star(10, 7);
	
	cout << "First star ";
	star1.printCoordinates();
	cout << "Second star ";
	star2.printCoordinates();
	cout << "Third star ";
	star3.printCoordinates();
	printFunction();
	printStar(star1,true);
	printStar(star2,true);
	printStar(star3,true);
	getchar();
	system("cls");
	cout << "First star ";
	star1.printCoordinates();
	cout << "Second star ";
	star2.printCoordinates();
	cout << "Third star ";
	star3.printCoordinates();
	printFunction();
	printStar(star1, false);
	printStar(star2, false);
	printStar(star3, false);
	miliSleep(1000);
	star1.move(20,7);
	star2.move(6, 7);
	star3.move(20, 15);
	system("cls");
	cout << "First star ";
	star1.printCoordinates();
	cout << "Second star ";
	star2.printCoordinates();
	cout << "Third star ";
	star3.printCoordinates();
	printFunction();
	printStar(star1, true);
	printStar(star2, true);
	printStar(star3, true);
	getchar();
}