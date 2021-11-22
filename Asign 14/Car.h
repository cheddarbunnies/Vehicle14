#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

//Car apart of vehicle
class Car : public Vehicle
{
private:
    //Variables
    int doors;

public:
    //Constructor
    Car(string manufacturer, int year, int doors);
    //Functions
    int Get_Doors();
    void Set_Doors(int doors);
    void Display_Info();
};
#endif

