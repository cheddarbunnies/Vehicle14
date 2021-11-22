#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string manufacturer;
    int year;
    int doors;
    int capacity;

    cout << "Vehicle program" << endl;
    cout << endl;

    cout << "Vehicle" << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> year;
    cin.ignore();

    Vehicle vehicle(manufacturer, year);
    vehicle.Display_Info();
    cout << endl;

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

    cout << endl;
    return 0;
}