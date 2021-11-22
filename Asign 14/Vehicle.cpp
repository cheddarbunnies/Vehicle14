#include "Vehicle.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

Vehicle::Vehicle(string manufacturer, int year)
{
    this->manufacturer = manufacturer;
    this->year = year;
}

string Vehicle::Get_Manufacturer()
{
    return manufacturer;
}

void Vehicle::Set_Manufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

int Vehicle::Get_Year()
{
    return year;
}

void Vehicle::Set_Year(int year)
{
    this->year = year;
}

void Vehicle::Display_Info()
{
    cout << "Vehicle Information:" << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << year << endl;
}

