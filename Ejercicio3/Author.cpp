#include "Author.h"

Author::Author(string name, string nationality, int age) {
	this->name = name;
	this->nationality = nationality;
	this->age = age;
}

void Author::printData() {
	std::cout << "Author name: " << name << " nationality: " << nationality << " age: " << age << endl;
}