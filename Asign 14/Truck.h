#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Truck : public Vehicle
{
private:
    //Variables
    int towingCap;

public:
    //Constructor
    Truck(string manufacturer, int year, int towingCap);
    //Functions
    int Get_Towing_Cap();
    void Set_Towing_Cap(int numDoors);
    void Display_Info();
};
#endif