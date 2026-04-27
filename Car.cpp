// Iman Eabeidallah
// 04/26/2026

// include the header file for the Car class
#include <iostream>
#include "Car.h"

using namespace std;
// constructor implementation
Car::Car(const std::string& manu, int year, int doors) : Vehicle(manu, year), numDoors(doors) {
}

// getter for number of doors
int Car::getNumDoors() const {
	return numDoors;
}

// setter for number of doors
void Car::setNumDoors(int doors) {
	numDoors = doors;
}

// override the display function to include number of doors
void Car::displayInfo() const {
	Vehicle::displayInfo(); // Call base class display
	cout << "Number of Doors: " << numDoors << endl;
}
