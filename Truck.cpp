// include the header file for the Truck class
#include <iostream>
#include "Truck.h"

using namespace std;
// constructor implementation
Truck::Truck(const std::string& manu, int year, double towing) : Vehicle(manu, year), towingCapacity(towing) {
}
// getter for towing capacity
double Truck::getTowingCapacity() const {
	return towingCapacity;
}
// setter for towing capacity
void Truck::setTowingCapacity(double towing) {
	towingCapacity = towing;
}
// override the display function to include towing capacity
void Truck::displayInfo() const {
	Vehicle::displayInfo(); // Call base class display
	cout << "Towing Capacity: " << towingCapacity << " tons" << endl;
}
