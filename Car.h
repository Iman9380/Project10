#pragma once
// include the Vehicle header to inherit from it
#include "Vehicle.h"
// creat the Car class that inherits from Vehicle
class Car : public Vehicle {
	private: // Private members are only accessible within the class
		int numDoors; // Store the number of doors in the car
	public: // Public members are accessible from outside the class
		// constructor that initializes the base class and the number of doors
		Car(const std::string& manu, int year, int doors);
		// getter for number of doors
		int getNumDoors() const;
		// setter for number of doors
		void setNumDoors(int doors);
		// override the display function to include number of doors
		void displayInfo() const; // This function will display the car's information, including the number of doors
};