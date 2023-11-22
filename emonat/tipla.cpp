#include "tipla.hpp"
#include <iostream>

using namespace std;

Thousandtipla::Thousandtipla() : Vehicle("Fiat", 1000, 2) {
    _passengers.push_back(Person("Sylvain", 70));
    _passengers.push_back(Person("Pierre", 70));
}

string Thousandtipla::collide(Vehicle &other, int mySpeed, int otherSpeed) {
    string result = Vehicle::collide(other, mySpeed, otherSpeed);
    cout << "1000tipla " << (result == _brand ? "wins!" : "loses!") << endl;
    return result;
}