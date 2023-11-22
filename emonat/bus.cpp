#include "bus.hpp"
#include <iostream>

using namespace std;

Bus::Bus(int weight) : Vehicle("Iveco", weight, 30) {}

string Bus::collide(Vehicle &other, int mySpeed, int otherSpeed) {
    string winner = Vehicle::collide(other, mySpeed, otherSpeed);
    if (winner == getBrand()) {
        cout << "Chui trop faur!" << endl;
    } else {
        cout << "Je me suis fait éclater!" << endl;
    }
    return winner;
}
