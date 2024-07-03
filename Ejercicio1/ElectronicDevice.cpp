#include "ElectronicDevice.h"

string ElectronicDevice::getBrand() {
	return brand;
}

bool ElectronicDevice::getIsOn() {
	return isOn;
}

ElectronicDevice::ElectronicDevice(string brand) : brand(brand), isOn(false) {
	std::cout << "ElectronicDevice constructor called for brand: " << brand << endl;
}

ElectronicDevice::~ElectronicDevice() {
	cout << "ElectronicDevice destructor called for brand: " << brand << endl;
}

void ElectronicDevice::turnOn() {
	isOn = true;
}

void ElectronicDevice::turnOff() {
	isOn = false;
}