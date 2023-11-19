#pragma once

#include <string>
#include <list>
#include "Person.hpp"

class Vehicule
{
private:
	std::string _brand;
	unsigned short _weight;
	std::list<Person> _passengers;

public:
	Vehicule(std::string brand, unsigned short weight, std::list<Person> passengers);

	const std::string brand() const;
	const unsigned short getWeight() const;
	const unsigned short weight() const;
};