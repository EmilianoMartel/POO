#pragma once
#include <iostream>
#include <string>

using namespace std;

class Character {
private:
    string name;
    int age;
public:
    Character(std::string name, int age) : name(name), age(age) {};

    virtual ~Character() {};

    string getName() {};

    int getAge() {};
};