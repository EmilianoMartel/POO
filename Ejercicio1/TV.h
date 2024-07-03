#pragma once
#include "ElectronicDevice.h"

class TV : public ElectronicDevice {
private:
    float screenSize;
    float brightness;
    int channel;
public:
    TV(string brand, float screenSize) : ElectronicDevice(brand), screenSize(screenSize), brightness(0), channel(0) {};

    ~TV() {};

    void setChannel(int channel) {};

    void setBrightness(float brightness) {};

    void printInfo() {};
};