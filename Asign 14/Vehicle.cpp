/*
Taylor Jones
21.FA.CIS.1202.502
11/21/2021
*/
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

//Get manufacturer function
string Vehicle::Get_Manufacturer()
{
    return manufacturer;
}

//Get year function
int Vehicle::Get_Year()
{
    return year;
}

//Set manufacturer function
void Vehicle::Set_Manufacturer(string manufacturer)
{
    this->manufacturer = manufacturer;
}

//Set year function
void Vehicle::Set_Year(int year)
{
    this->year = year;
}

//Display vehicle info
void Vehicle::Display_Info()
{
    cout << "Vehicle Information:" << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << year << endl;
}

