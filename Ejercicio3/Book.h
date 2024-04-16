#pragma once
#include <iostream>
#include <string>
#include "Author.h"

using namespace std;

class Book {
private:
	string name;
	Author author = Author("","",0);
	string isbn;

public:
	Book(string name, Author author, string isbn);
	void printData();
};