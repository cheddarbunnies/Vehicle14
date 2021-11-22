#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
#include <string>

using namespace std;

Truck::Truck(string manufacturer, int year, int capacity) : towingCap(capacity), Vehicle(manufacturer, year)
{
}

//Get function for towing capacity
int Truck::Get_Towing_Cap()
{
    return towingCap;
}

//Set function for towing capacity
void Truck::Set_Towing_Cap(int capacity)
{
    this->towingCap = capacity;
}

//Display info of vehicle info and towing capacity
void Truck::Display_Info()
{
    Vehicle::Display_Info();
    cout << "Towing capacity: " << towingCap << endl;
}
