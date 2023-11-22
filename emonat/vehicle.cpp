#include "vehicle.hpp"
#include <iostream>

using namespace std;

Vehicle::Vehicle(const string &brand, int weight, int maxPassengers)
    : _brand(brand), _weight(weight), _maxPassengers(maxPassengers) {}

string Vehicle::getBrand() const {
    return _brand;
}

void Vehicle::setBrand(const string &brand) {
    _brand = brand;
}

int Vehicle::getMaxPassengers() const {
    return _maxPassengers;
}

void Vehicle::setMaxPassengers(int maxPassengers) {
    _maxPassengers = maxPassengers;
}

void Vehicle::addPassenger(const Person &person) {
    if (_passengers.size() < _maxPassengers) {
        _passengers.push_back(person);
    } else {
        cout << "No more room to add another passenger!" << endl;
    }
}

bool Vehicle::removePassenger(const string &fullName) {
    for (auto it = _passengers.begin(); it != _passengers.end(); ++it) {
        if (it->getFullName() == fullName) {
            _passengers.erase(it);
            return true;
        }
    }
    return false;
}

int Vehicle::getEmptyWeight() const {
    return _weight;
}

int Vehicle::getTotalWeight() const {
    int totalWeight = _weight;
    for (const auto &passenger : _passengers) {
        totalWeight += passenger.getWeight();
    }
    return totalWeight;
}

int Vehicle::getMomentum(int velocity) const {
    return getTotalWeight() * velocity;
}

string Vehicle::collide(Vehicle &other, int mySpeed, int otherSpeed) {
    int myMomentum = getMomentum(mySpeed);
    int otherMomentum = other.getMomentum(otherSpeed);

    return myMomentum > otherMomentum ? _brand : other.getBrand();
}