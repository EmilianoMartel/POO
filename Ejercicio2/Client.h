#pragma once
#include <iostream>
#include <string>
#include <iostream>

using namespace std;

class Client {
private:
    string name;
    string lastname;
    int age;
    
public:
    Client(const string& nombre, const string& apellido, int edad)
        : name(nombre), lastname(apellido), age(edad) {}

    string getNombre();
    string getApellido();
    int getAge();
    void printInfo();
};