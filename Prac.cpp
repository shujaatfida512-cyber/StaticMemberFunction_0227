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
    void display()
    {
        cout << "Vehicle ID: " << vehicleID << endl;
        cout << "Vehicle Name: " << vehicleName << endl;
        cout << endl;
    }
};

int main()
{
        Vehicle v1;
        Vehicle v2(101);
        Vehicle v3("Toyota");
        Vehicle v4(202, "Honda");

        v1.display();
        v2.display();
        v3.display();
        v4.display();

        return 0;
}