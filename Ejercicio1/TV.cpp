#include "TV.h"

TV::TV(string brand, float screenSize) : ElectronicDevice(brand), screenSize(screenSize), brightness(0), channel(0) {
    cout << "TV constructor called for brand: " << brand << " with screen size: " << screenSize << endl;
}

TV::~TV() {
    cout << "TV destructor called for brand: " << getBrand() << endl;
}

void TV::setChannel(int channel) {
    this->channel = channel;
}

void TV::setBrightness(float brightness) {
    this->brightness = brightness;
}

void TV::printInfo() {
    cout << "Brand: " << getBrand() << "\n"
        << "Screen Size: " << screenSize << "\n"
        << "Brightness: " << brightness << "%\n"
        << "Channel: " << channel << "\n"
        << "Is On: " << (getIsOn() ? "Yes" : "No") << endl;
}