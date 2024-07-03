#pragma once
#include <iostream>
#include <string>

using namespace std;

class ElectronicDevice {
private:
	string brand;
	bool isOn;
protected:
	string getBrand() {};
	bool getIsOn() {};
public:
	ElectronicDevice(string brand) : brand(brand), isOn(false) {};

	virtual ~ElectronicDevice() {};

	void turnOn() {};

	void turnOff() {};
};