#pragma once
#include <iostream>

class Person {
private:
	std::string name;
	int age;
public:
	Person();
	~Person();
	void talk();
	void setName(std::string name);
	void setAge(int age);
};
