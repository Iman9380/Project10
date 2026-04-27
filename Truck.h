#pragma once
// Iman Eabeidallah
// 04/26/2026

// include the Vehicle header to inherit from it
#include "Vehicle.h"


// creat the Truck class that inherits from Vehicle
// double towingCapacity; // Store the towing capacity of the truck
class Truck : public Vehicle {
	private: // Private members are only accessible within the class
		double towingCapacity; // Store the towing capacity of the truck
	public: // Public members are accessible from outside the class
		// constructor that initializes the base class and the towing capacity
		Truck(const std::string& manu, int year, double towing);
		// getter for towing capacity
		double getTowingCapacity() const;
		// setter for towing capacity
		void setTowingCapacity(double towing);
		// override the display function to include towing capacity
		void displayInfo() const; // This function will display the truck's information, including the towing capacity
};
