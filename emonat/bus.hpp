#pragma once
#include "vehicle.hpp"

using namespace std;

class Bus : public Vehicle {
public:
    Bus(int weight);

    string collide(Vehicle &other, int mySpeed, int otherSpeed) override;
};

