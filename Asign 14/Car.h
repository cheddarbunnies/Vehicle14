#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Car : public Vehicle
{
private:
    int doors;

public:
    Car(string manufacturer, int year, int doors);
    int Get_Doors();
    void Set_Doors(int doors);
    void Display_Info();
};
#endif

