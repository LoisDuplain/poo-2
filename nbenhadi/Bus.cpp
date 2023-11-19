#include <iostream>
#include "Bus.hpp"
#include "Vehicle.hpp"

Bus::Bus(int weight) : Vehicle("Iveco", weight, 30)
{}

Vehicle Bus::collide(Vehicle otherVehicle, int speed1, int speed2)
{
    // Counting passengers tied up in the first vehicle (this)
    int numberPassengersThis = getPassengerCount();
    int numberTiedUpThis = 0;

    for (const auto& passenger : getPassengers())
    {
        if (passenger.getIsTiedUp())
        {
            numberTiedUpThis += 1;
        }
    }

    // Counting passengers tied up in the second vehicle (otherVehicle)
    int numberPassengersOther = otherVehicle.getPassengerCount();
    int numberTiedUpOther = 0;

    for (const auto& passenger : otherVehicle.getPassengers())
    {
        if (passenger.getIsTiedUp())
        {
            numberTiedUpOther += 1;
        }
    }

    // Total
    int totalTiedUp = numberTiedUpThis + numberTiedUpOther;
    int totalNotTiedUp = numberPassengersThis + numberPassengersOther - totalTiedUp;

    //Collide
    Vehicle winner = Vehicle::collide(otherVehicle, speed1, speed2);
    int deaths = totalNotTiedUp;

    if (totalNotTiedUp > 0)
    {
        if (winner.getBrand() == this->getBrand())
        {
            std::cout << "The unstoppable " << this->getBrand() << " bus has triumphed over the competition! Take that, other vehicles! but " << deaths << " people died." << std::endl;
        }
        else if (winner.getBrand() == otherVehicle.getBrand())
        {
            std::cout << "Ouch! The " << this->getBrand() << " bus took a hard hit. Seems like today isn't its day for victories... but " << deaths << " people died." << std::endl;
        }
        else
        {
            std::cout << "Boom! Epic collision between the two vehicles but " << deaths << " people died." << std::endl;
        }
    }
    else
    {

        if (winner.getBrand() == this->getBrand())
        {
            std::cout << "The unstoppable " << this->getBrand() << " bus has triumphed over the competition! Take that, other vehicles! but everyone survived." << std::endl;
        }
        else if (winner.getBrand() == otherVehicle.getBrand())
        {
            std::cout << "Ouch! The " << this->getBrand() << " bus took a hard hit. Seems like today isn't its day for victories... but everyone survived." << std::endl;
        }
        else
        {
            std::cout << "Boom! Epic collision between the two vehicles but everyone survived." << std::endl;
        }
    }

    return winner;
}