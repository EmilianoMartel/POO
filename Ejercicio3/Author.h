#pragma once
#include <iostream>
#include <string>
using namespace std;

class Author {
private:

	string name;
	string nationality;
	int age;

public:
	Author(string name, string nationality, int age);
	void printData();
};