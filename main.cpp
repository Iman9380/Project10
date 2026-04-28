// Iman Eabeidallah	
// CIS 1202 101
// 04/27/2026


// include the header files for the Vehicle, Car, and Truck classes
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
// include limits to use numeric_limits for clearing the input buffer
#include <limits>
using namespace std;

// ask for manufacturer, year built, number of doors for the car, and towing capacity for the truck
// create A Vehicle object, a Car object, and a Truck object using the user input
// display the information for each object using the display function
// comment every line of code to explain what it does
// make sure to add the vehicle object first, then the car object, and finally the truck object

int main() {
	// Variables to store user input
	string manufacturer;
	int yearBuilt;
	int numDoors;
	double towingCapacity;
	// Ask user for vehicle information
	cout << "Enter the manufacturer of the vehicle: ";
	getline(cin, manufacturer); // Use getline to allow for manufacturers with spaces in their names
	cout << "Enter the year the vehicle was built: ";
	cin >> yearBuilt;
	
	// Clear the input buffer after reading an integer to avoid issues with subsequent getline calls
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

	Vehicle myVehicle(manufacturer, yearBuilt); // Create a Vehicle object using user input
	// Display the information for the Vehicle object
	cout << "\nVehicle Information:" << endl;
	myVehicle.displayInfo(); // Call the display function to show the vehicle's information
	// car information
	cout << "\nEnter the manufacturer of the car: ";
	getline(cin, manufacturer);
	cout << "Enter the year the car was built: ";
	cin >> yearBuilt;
	cout << "Enter the number of doors in the car: ";
	cin >> numDoors;
	// Clear the input buffer after reading an integer to avoid issues with subsequent getline calls
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
	Car myCar(manufacturer, yearBuilt, numDoors); // Create a Car object using user input
	// Display the information for the Car object
	cout << "\nCar Information:" << endl;
	myCar.displayInfo(); // Call the display function to show the car's information
	// truck information
	cout << "\nEnter the manufacturer of the truck: ";
	getline(cin, manufacturer);
	cout << "Enter the year the truck was built: ";
	cin >> yearBuilt;
	cout << "Enter the towing capacity of the truck (in tons): ";
	cin >> towingCapacity;
	// Clear the input buffer after reading a double to avoid issues with subsequent getline calls
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

	Truck myTruck(manufacturer, yearBuilt, towingCapacity); // Create a Truck object using user input
	// Display the information for the Truck object
	cout << "\nTruck Information:" << endl;
	myTruck.displayInfo(); // Call the display function to show the truck's information

	return 0; // Return 0 to indicate successful execution
}
