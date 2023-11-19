#pragma once
#include "Vehicle.hpp"
#include "Person.hpp"

class F1000tipla : public Vehicle
{
public:
	F1000tipla(bool isTiedUp1, bool isTiedUp2);
	Vehicle collide(Vehicle otherVehicle, int speed2);
};