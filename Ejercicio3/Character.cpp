#include "Character.h"

Character::Character() {
	color = Color::BLACK;
	x = 0;
	y = 0;
}

Character::~Character() {

}

void Character::setPosition(int x, int y) {
	this->x = x;
	this->y = y;
}

void Character::setColor(Color color) {
	this->color = color;
}

void Character::draw() {
	goToCoordinates(x, y);
	setForegroundColor(color);
	std::cout << " o ";
	goToCoordinates(x, y + 1);
	std::cout << "/|\\";
	goToCoordinates(x, y + 2);
	std::cout << "/ \\";
}