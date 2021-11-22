#include "Car.h"
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car(string manufacturer, int year, int doors) : doors(doors), Vehicle(manufacturer, year)
{
}

//Get function for number of doors
int Car::Get_Doors()
{
    return doors;
}

//Set function for number of doors
void Car::Set_Doors(int doors)
{
    this->doors = doors;
}

//Display vehicle info and number of doors
void Car::Display_Info()
{
    Vehicle::Display_Info();
    cout << "Doors: " << doors << endl;
}

