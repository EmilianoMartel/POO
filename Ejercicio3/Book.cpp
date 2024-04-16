#include "Book.h"

Book::Book(string name, Author author, string isbn){
	this->name = name;
	this->author = author;
	this->isbn = isbn;
}

void Book::printData() {
	std::cout << "Book name: " << name << " isbn: " << isbn << endl;
	author.printData();
}