#include "person.hpp"
#include "vehicle.hpp"
#include "bus.hpp"
#include "tipla.hpp"
#include <iostream>

using namespace std;

int main() {
    Person Sylvain("Sylvain", 65);
    Bus bus(15000);
    Thousandtipla tipla;

    bus.addPassenger(Pierre);
    bus.addPassenger(Person("Pierre", 65));

    string collisionResult = bus.collide(tipla, 50, 320);
    cout << "The winner of the collision is: " << collisionResult << endl;

    return 0;
}
