/*
Taylor Jones
21.FA.CIS.1202.502
11/21/2021
*/
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
    //Variables
    string manufacturer;
    int year;

public:
    //Constructor
    Vehicle(string manufacturer, int year);

    //Functions
    string Get_Manufacturer();
    void Set_Manufacturer(string manufacturer);
    int Get_Year();
    void Set_Year(int year);
    virtual void Display_Info();
};
#endif