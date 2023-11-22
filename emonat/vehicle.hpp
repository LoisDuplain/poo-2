#pragma once
#include <string>
#include <list>
#include "vehicle.hpp"

using namespace std;

class Vehicle {
private:
    string _brand;
    int _weight;
    list<Person> _passengers;
    int _maxPassengers;

public:
    Vehicle(const std::string &brand, int weight, int maxPassengers);

    string getBrand() const;
    void setBrand(const std::string &brand);
    int getMaxPassengers() const;
    void setMaxPassengers(int maxPassengers);

    void addPassenger(const Person &person);
    bool removePassenger(const string &fullName);
    int getEmptyWeight() const;
    int getTotalWeight() const;
    int getMomentum(int velocity) const;
    virtual string collide(Vehicle &other, int mySpeed, int otherSpeed);
};