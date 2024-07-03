#include <iostream>
#include "TV.h"

int main() {
    TV tv1("Sony", 55.0);
    TV tv2("Samsung", 65.0);

    tv1.setBrightness(50);
    tv1.setChannel(300);
    tv2.setBrightness(75);
    tv2.setChannel(700);

    tv1.turnOn();
    tv2.turnOn();

    cout << "\nTV1 Info:" << endl;
    tv1.printInfo();
    cout << "\nTV2 Info:" << endl;
    tv2.printInfo();

    tv1.turnOff();
    tv2.turnOff();

    cout << "\nTV1 Info after turning off:" << endl;
    tv1.printInfo();
    cout << "\nTV2 Info after turning off:" << endl;
    tv2.printInfo();

    return 0;
}