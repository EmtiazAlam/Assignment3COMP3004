#ifndef ELEVATOR_H
#define ELEVATOR_H

/* Class Purpose: Assign an id for each Elevator created.
Data Members:
- int id: a unique identifier for elevators
 *
 * Class Functions:
 * - int getId: get id of the elevator
 */


class Elevator
{
public:
    Elevator(int id = 0);
    int getId();

 private:
    int id;
};


#endif // ELEVATOR_H
