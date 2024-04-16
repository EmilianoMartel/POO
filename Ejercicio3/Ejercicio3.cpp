#include <iostream>
#include "Author.h"
#include "Book.h"
#include <Windows.h>
#include <sstream>
#include <conio.h>

using namespace std;

int main()
{
    Author author1 = Author("Cortazar","Argentinian",92);
    Author author2 = Author("James", "American", 70);

    Book book1 = Book("Trian", author2, "asd");
    Book book2 = Book("Trian 2", author2, "abb");
    Book book3 = Book("Rayuela", author1, "qwe");

    book1.printData();
    book2.printData();
    book3.printData();

    getchar();
    system("cls");
}