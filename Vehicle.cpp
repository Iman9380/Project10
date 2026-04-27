// Iman Eabeidallah
// 04/26/2026

// include the header file for the Vehicle class
#include <iostream>
#include "Vehicle.h"

using namespace std;
// constructor implementation
// initializes the manufacturer and year built with the provided values
Vehicle::Vehicle(const std::string& manu, int year) {
	manufacturer = manu;
	yearBuilt = year;
}

// getter for manufacturer
std::string Vehicle::getManufacturer() const {
	return manufacturer;
}

// setter for manufacturer
void Vehicle::setManufacturer(const std::string& manu) {
	manufacturer = manu;
}

// getter for year built
int Vehicle::getYearBuilt() const {
	return yearBuilt;
}

// setter for year built
void Vehicle::setYearBuilt(int year) {
	yearBuilt = year;
}

// display function
void Vehicle::displayInfo() const {
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}
