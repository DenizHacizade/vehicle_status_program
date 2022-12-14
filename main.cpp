#include <iostream>
#include <string>
using namespace std;
#include "Vehicle.h"
void TEST_Acceleration(Vehicle& vehicle, double amount)
{
    double previousSpeed = vehicle.getCurrentSpeed();
    if (vehicle.Accelarate(amount))
    {
        cout << "SUCCESS : Accelerated " << endl;
        cout << "Previous Speed : " << previousSpeed << " Current Speed : " <<
            vehicle.getCurrentSpeed() << endl;
    }
    else
    {
        cout << "FAILURE : Could not Accelerated" << endl;
    }
}

void TEST_Deceleration(Vehicle& vehicle, double amount)
{
    double previousSpeed = vehicle.getCurrentSpeed();
    if (vehicle.Decelerate(amount))
    {
        cout << "SUCCESS : Decelerated " << endl;
        cout << "Previous Speed : " << previousSpeed << " Current Speed : " <<
            vehicle.getCurrentSpeed() << endl;
    }
    else
    {
        cout << "FAILURE : Could not Decelerated" << endl;
    }
}

void TEST_GetIn(Vehicle& vehicle, int passengerNumber)
{
    
    int previous = vehicle.getCurrentPassengerNumber();

    if (vehicle.GetIn(passengerNumber) == false) {

        cout << "Previous PassengerNumber: " << previous << " Current PassengerNumber: " << vehicle.getCurrentPassengerNumber() << endl;
    }
    
}


void TEST_GetOut(Vehicle& vehicle, int passengerNumber){

    int previous = vehicle.getCurrentPassengerNumber();

    if (vehicle.GetOut(passengerNumber) == false) {

        cout << "Previous PassengerNumber: " << previous << " Current PassengerNumber: " << vehicle.getCurrentPassengerNumber() << endl;
    }
    
}


void TEST_StartEngine(Vehicle& vehicle)
{
    vehicle.StartEngine();
}


void TEST_StopEngine(Vehicle& vehicle)
{
    vehicle.StopEngine();
}


int main()
{
    cout << "+-----------------------+" << endl
        << "| TEST OF FIRST VEHICLE |" << endl
        << "+-----------------------+" << endl;
    Vehicle vehicle1(4, 220);
    vehicle1.StartEngine();
    TEST_Acceleration(vehicle1, 30);
    TEST_Deceleration(vehicle1, 20);
    TEST_GetIn(vehicle1, 2);
    TEST_GetOut(vehicle1, 1);
    vehicle1.StopEngine();

    cout << "+------------------------+" << endl
        << "| TEST OF SECOND VEHICLE |" << endl
        << "+------------------------+" << endl;
    Vehicle vehicle2(5, 180);
    TEST_Acceleration(vehicle2, 30);
    TEST_Deceleration(vehicle2, 20);
    TEST_GetIn(vehicle2, 2);
    TEST_GetOut(vehicle2, 1);
    return 0;
}