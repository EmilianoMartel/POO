#include <iostream>
#include <sstream>
#include <conio.h>
#include "AwesomeLibrary.h"
#include "Person.h"

using namespace std;

int CheckIntInput() {
    string inputString;
    int integerValue = 0;
    do
    {
        cout << "Insert the age: \n";
        cin >> inputString;
        integerValue = stoi(inputString);
        try {
            integerValue = stoi(inputString);
            break;
        }
        catch (const invalid_argument& e) {
            cout << "The input is not number. Try again." << endl;
        }
        catch (const out_of_range& e) {
            cout << "Out of range, try again." << endl;
        }
    } while (true);

    return integerValue;
}

int main()
{
    string inputString;
    Person person1 = Person::Person();
    cout << "Insert the name: \n";
    cin >> inputString;
    person1.setName(inputString);
    person1.setAge(CheckIntInput());
    person1.talk();
    getchar();
    person1.~Person();
    getchar();
}

