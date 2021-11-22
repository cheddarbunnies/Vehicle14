#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
    string manufacturer;
    int year;

public:
    //constructor
    Vehicle(string manufacturer, int year);

    //getters and setters
    string Get_Manufacturer();
    void Set_Manufacturer(string manufacturer);

    int Get_Year();
    void Set_Year(int year);
    virtual void Display_Info();
};
#endif