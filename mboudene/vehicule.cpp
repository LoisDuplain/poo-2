#include "HeaderVehicule.h"
#include <iostream>
using namespace std;

Vehicule::Vehicule(string Brand, unsigned short Weight, list<Person> Passengers, unsigned short MaxPassengers)
	: _brand(Brand), _weight(Weight), _maxPassengers(MaxPassengers), _passengers(Passengers)
{

}