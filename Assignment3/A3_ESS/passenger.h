#ifndef PASSENGER_H
#define PASSENGER_H

/* Class Purpose:
Data Members:
- int passengerid : a unique id for each passenger created
- int initialFloor: set the initial floor for a passenger
- int requestedFloor: passenger selects the requested floor

Class Functions:
- Getter and Setters
*/
class Passenger
{
public:
    Passenger(int passengerId = 0, int initialFloor = 0);
    int getPassengerId();
    int getInitialFloor();
    int getRequestedFloor();
    void setInitialFloor(int initialFloor);
private:
    int passengerId;
    int initialFloor;
    int requestedFloor;
};

#endif // PASSENGER_H

