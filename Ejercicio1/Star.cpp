#include "Star.h"

Star::Star(int x, int y) {
	this->x = x;
	this->y = y;
}

void Star::show(){
	std::cout << "*";
}

void Star::hide() {
	std::cout << " ";
}

void Star::move(int x, int y){
	this->x = x;
	this->y = y;
}

void Star::printCoordinates(){
	std::cout << x << " " << y;
}

int Star::getX(){
	return x;
}

int Star::getY(){
	return y;
}