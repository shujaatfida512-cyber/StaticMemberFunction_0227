#include <iostream>
using namespace std;

class Vehicle
{
private:
    int vehicleID;
    string vehicleName;

public:
    Vehicle()
    {
        vehicleID = 0;
        vehicleName = "Unknown";
    }

    Vehicle(int id)
    {
        vehicleID = id;
        vehicleName = "Unknown";
    }

    Vehicle(string name)
    {
        vehicleID = 0;
        vehicleName = name;
    }

    Vehicle(int id, string name)
    {
        vehicleID = id;
        vehicleName = name;
    }

int main()
{

}