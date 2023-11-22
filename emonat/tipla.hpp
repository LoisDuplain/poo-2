#pragma once
#include "Vehicle.hpp"

class Thousandtipla : public Vehicle {
public:
    Thousandtipla();

    std::string collide(Vehicle &other, int mySpeed, int otherSpeed) override;
};