#include <iostream>
using namespace std;
// Base class representing vehicles
class Vehicle {
protected:
    string fuelType;
    int capacity; // in liters

public:
    // Constructor
    Vehicle(string fuel, int cap) : fuelType(fuel), capacity(cap) {}

    // Function to display vehicle details
    void displayDetails() const {
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Capacity: " << capacity << " liters" << endl;
    }
};

// Derived class representing cars
class Car : public Vehicle {
protected:
    int numSeats;

public:
    // Constructor
    Car(string fuel, int cap, int seats) : Vehicle(fuel, cap), numSeats(seats) {}

    // Function to display car details
    void displayDetails() const {
        Vehicle::displayDetails();
        cout << "Number of Seats: " << numSeats << endl;
    }
};

// Derived class representing sedan cars
class Sedan : public Car {
private:
    int bootSpace; // in cubic feet

public:
    // Constructor
    Sedan(string fuel, int cap, int seats, int boot) : Car(fuel, cap, seats), bootSpace(boot) {}

    // Function to display sedan details
    void displayDetails() const {
        Car::displayDetails();
        cout << "Boot Space: " << bootSpace << " cubic feet" << endl;
    }
};

int main() {
    // Create objects representing different types of cars
    Car car1("Petrol", 50, 5);
    Sedan sedan1("Diesel", 60, 5, 15);

    // Display details of each vehicle
    cout << "Car 1 Details:" << endl;
    car1.displayDetails();
    cout << endl;

    cout << "Sedan 1 Details:" << endl;
    sedan1.displayDetails();

    return 0;
}
