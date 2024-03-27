#include "passenger.h"

//contructor and initialization
Passenger::Passenger(int passengerId, int initialFloor)
{
    this->passengerId = passengerId;
    this->initialFloor = initialFloor;


}
//getter and setters
int Passenger:: getInitialFloor(){ return initialFloor;}
int Passenger:: getRequestedFloor(){ return requestedFloor;}
int Passenger:: getPassengerId(){ return passengerId;}
void Passenger :: setInitialFloor(int initialFloor){ this->initialFloor = initialFloor;}

