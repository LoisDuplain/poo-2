#pragma once
#include "Vehicle.hpp"

class Bus : public Vehicle
{
public:
	Bus(int weight);
	Vehicle collide(Vehicle otherVehicle, int speed1, int speed2) override;
};