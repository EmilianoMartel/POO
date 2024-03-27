#include "Person.h"

Person::Person() {
	name = "";
	age = 0;
}

Person::~Person() {
	std::cout << "I am dead" << std::endl;
}

void Person::talk() {
	std::cout << "Hi my name is " << name << " and my age is " << age << " years old." << std::endl;
}

void Person::setName(std::string name) {
	this->name = name;
}

void Person::setAge(int age) {
	this->age = age;
}