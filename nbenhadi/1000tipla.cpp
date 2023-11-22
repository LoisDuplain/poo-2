#include <iostream>
#include "1000tipla.hpp"
#include "Vehicle.hpp"
#include "Person.hpp"

F1000tipla::F1000tipla(bool isTiedUp1, bool isTiedUp2) : Vehicle("Fiat", 1400, 30)
{
    Person sylvain("Sylvain", 68);
    Person pierre("Pierre", 63);

    addPassenger(sylvain, isTiedUp1);
    addPassenger(pierre, isTiedUp2);
}

Vehicle F1000tipla::collide(Vehicle otherVehicle, int speed2)
{
    int speed1 = 320;
    int speedDifference = speed1 - speed2;
    
    for (auto& passengerThis : getPassengers())
    {
        if (!passengerThis.isDead())
        {
            if (!passengerThis.getIsTiedUp())
            {
                passengerThis.setIsDead(1);
                passengerThis.setHealth(0);

                std::string message = "Game over, my adventure has come to an end.";
                std::cout << passengerThis.say(message) << std::endl;
            }
            else
            {
                passengerThis.takeDamage(passengerThis.getHealth(), speedDifference);
            }
        }
    }
    
    for (auto& passengerOther : otherVehicle.getPassengers())
    {
        if (!passengerOther.isDead())
        {
            if (!passengerOther.getIsTiedUp())
            {
                passengerOther.setIsDead(1);
                passengerOther.setHealth(0);

                std::string message = "Game over, my adventure has come to an end.";
                std::cout << passengerOther.say(message) << std::endl;
            }
            else
            {
                passengerOther.takeDamage(passengerOther.getHealth(), speedDifference);
            }
        }
    }

    return *this;
}