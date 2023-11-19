#include <iostream>
#include "1000tipla.hpp"
#include "Vehicle.hpp"
#include "Person.hpp"

F1000tipla::F1000tipla(bool isTiedUp1, bool isTiedUp2) : Vehicle("Fiat", 1400, 30)
{
    Person sylvain("Sylvain", 68);
    Person pierre("Pierre", 63);

    addPassenger(sylvain, isTiedUp1);
    addPassenger(pierre, isTiedUp1);
}

Vehicle F1000tipla::collide(Vehicle otherVehicle, int speed2)
{
    int speed1 = 320;
   

    // Counting passengers tied up in the first vehicle (this)
    int numberPassengersThis = this->getPassengerCount();

    for (auto& passenger : getPassengers())
    {
        if (!passenger.isDead())
        {
            if (!passenger.getIsTiedUp())
            {
                passenger.setIsDead(true);
                passenger.setHealth(0);

                passenger.takeDamage(passenger.getHealth());
            }
            else
            {
                passenger.takeDamage(passenger.getHealth());
            }
        }
    }

    // Counting passengers tied up in the second vehicle (otherVehicle)
    int numberPassengersOther = otherVehicle.getPassengerCount();

    for (auto& passengerOther : otherVehicle.getPassengers())
    {
        if (!passengerOther.isDead())
        {
            if (!passengerOther.getIsTiedUp())
            {
                passengerOther.setIsDead(true);
                passengerOther.setHealth(0);

                passengerOther.takeDamage(passengerOther.getHealth());
            }
            else
            {
                passengerOther.takeDamage(passengerOther.getHealth());
            }
        }
    }

    Vehicle winner = Vehicle::collide(otherVehicle, speed1, speed2);

    return winner;
}