#pragma once

#include <string>
#include <list>
#include "Person.h"
/* add #include for (std::list) */

class Vehicle
{
private :
	std::string _brand;
	unsigned short _weight;
	std::list<Person> _passengers;
	unsigned short _maxPassengers;

public:
	Vehicle(std::string brand, unsigned short weight, unsigned short maxPassengers);

	const std::string getBrand() const;
	void setBrand();
	void addPassenger(Person AddPerson);
	void removePassenger(Person DelPerson);
	unsigned short getEmptyWeight();
	unsigned short getWeight();
	const unsigned short getMaxPassengers();
};