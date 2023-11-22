#include <iostream>
#include "Vehicle.h"
#include <list>


void Vehicle::addPassenger(Person AddPerson)
{
	_passengers.push_back(AddPerson);

}

void Vehicle::removePassenger(Person DelPerson)
{
	//_passengers.remove(DelPerson);
}

/*unsigned short Vehicle::getEmptyWeight()
{
	return _weight;
}
unsigned short Vehicle::getWeight()
{
	std::list<Person>::iterator itr;
	for (itr = _passengers.begin(); itr != _passengers.end(); ++itr)
		std::cout << " " << (*itr).getWeight();
	std::cout << std::endl;
}*/