#include "Character.h"

Character::Character(string name, int age) : name(name), age(age) {
    cout << "Character constructor called for: " << name << endl;
}

Character::~Character() {
    cout << "Character destructor called for: " << name << endl;
}

string Character::getName() {
    return name;
}

int Character::getAge() {
    return age;
}