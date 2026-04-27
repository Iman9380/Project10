#pragma once
// Iman Eabeidallah
// 04/26/2026

// This file defines the Vehicle base class.
// It stores basic information about a vehicle like manufacturer and year built.
// It also declares getters, setters, and a function to display the info.

// vehicle class definition:
// Store manufacturer and year built
// constructor & getters, setters, and display function
// display function will be virtual to allow derived classes to override it
// comment evey line of code to explain what it does

// Include necessary headers
#include <string>
using namespace std;
class Vehicle { // No implementation here, just the class definition
	private: // Private members are only accessible within the class
		std::string manufacturer; // Store the manufacturer of the vehicle
		int yearBuilt; // Store the year the vehicle was built

public: // Public members are accessible from outside the class	
	// constructor 
	Vehicle(const std::string& manu, int year);
	// getter for manufacturer
	std::string getManufacturer() const;
	// setter for manufacturer
	void setManufacturer(const std::string& manu);	
	// getter for year built
	int getYearBuilt() const;
	// setter for year built
	void setYearBuilt(int year);
	// display function
	void displayInfo() const; // This function will display the vehicle's information
};

