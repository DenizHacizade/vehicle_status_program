#include "Vehicle.h"
Vehicle::Vehicle(int maxPassengerNumber, double maxSpeed)
{
    this->maxSpeed = maxSpeed;
    this->maxPassengerNumber = maxPassengerNumber;
    this->engineStarted = false;
    this->currentSpeed = 0;
    this->currentPassengerNumber = 0;
}
Vehicle::~Vehicle()
{
}

bool Vehicle::Accelarate(double amount)
{
    if (IsEngineStarted() == true) {
        currentSpeed += amount;
        return true;
    }
    else if(IsEngineStarted() == false) {
        return false;
    }
}
bool Vehicle::Decelerate(double amount)
{
    if (currentSpeed + amount <= 0) {
        currentSpeed = 0;
        return false;
    }
    else if (IsEngineStarted() == true) {
        currentSpeed -= amount;
        return true;
    }
    else return false;
}
void Vehicle::StartEngine()
{
    engineStarted = true;
    if (engineStarted== true) {
        cout << "Engine Started" << endl;
    }
    
}
void Vehicle::StopEngine(){
    engineStarted = true;
    if (engineStarted == true) {
        engineStarted = false;
        cout << "Engine Stopped" << endl;
    }
}
bool Vehicle::GetIn(int passengerNumber)
{
    if (IsEngineStarted() == true) {
        cout<<"ERROR:" << " Can not get-in the vehicle while moving"<<endl;
        cout << "FAILURE:" << " Couldn't got in" << endl;
        return true;
    }
    else if (IsEngineStarted() == false) {
        cout << "SUCCES: Got in" << endl;
        currentPassengerNumber += passengerNumber;
        return false;
   }

}
bool Vehicle::GetOut(int passengerNumber){

    if (IsEngineStarted() == true) {
        cout << "ERROR:" << " Can not get-out the vehicle while moving" << endl;
        cout << "FAILURE:" << " Couldn't got out" << endl;
        return true;
    }
    else if (IsEngineStarted() == false) {

        currentPassengerNumber -= passengerNumber;
        cout << "SUCCES: Got out" << endl;
        
        return false;
    }

}

double Vehicle::getCurrentSpeed()
{
    

    return currentSpeed;
}

double Vehicle::getCurrentPassengerNumber()
{
    return currentPassengerNumber;
}

bool Vehicle::IsEngineStarted()
{
 
    return engineStarted;
}