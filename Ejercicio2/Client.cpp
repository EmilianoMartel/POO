#include "Client.h"

void Client::printInfo(){
    cout << "Name: " << name << ", LastName: " << lastname << ", Edad: " << age << endl;
}

string Client::getNombre() { return name; }
string Client::getApellido() { return lastname; }
int Client::getAge() { return age; }