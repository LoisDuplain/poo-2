#pragma once
#include <string>
#include <list> 
#include "Person.h"

class Vehicle
{
private :
	std::string _brand;
	unsigned short _weight;
	std::list<Person> _passengers; 
	unsigned short _maxPassengers;
public:
	Vehicle(std::string brand, unsigned short weight, std::list<Person> passengers,unsigned short maxpassengers);

	const std::string getBrand() const;
	const unsigned short getMaxPassengers() const; 

	void setBrand(std::string brand);
	void addPassenger();


};
	 
