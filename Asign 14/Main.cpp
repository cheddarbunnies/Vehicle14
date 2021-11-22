#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //Variables
    string manufacturer;
    int year;
    int doors;
    int capacity;

    cout << "Vehicle program" << endl;
    cout << endl;

    //Vehicle info
    cout << "Vehicle" << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore();

    Vehicle vehicle(manufacturer, year);
    vehicle.Display_Info();
    cout << endl;

    //Car info
    cout << "Car" << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore();

    cout << "Enter the number of doors: ";
    cin >> doors;
    cin.ignore();

    Car car(manufacturer, year, doors);
    car.Display_Info();
    cout << endl;

    //Truck info
    cout << "Truck" << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore();

    cout << "Enter the towing capacity: ";
    cin >> capacity;
    cin.ignore();

    Truck truck(manufacturer, year, capacity);
    truck.Display_Info();
    cout << endl;

    return 0;
}