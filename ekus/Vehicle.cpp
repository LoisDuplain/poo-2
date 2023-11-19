#include <iostream>
#include "Vehicle.h"




Vehicle::Vehicle(std::string brand, unsigned short weight, std::list<Person> passengers, unsigned short maxPassengers)
	:_brand(brand), _weight(weight), _passengers(0), _maxPassengers(maxPassengers)
{
} 
	const std::string Vehicle::getBrand() const 
	{
		return _brand;
	}

	const unsigned short Vehicle::getMaxPassengers() const 
	{
		return _maxPassengers;
	}
	void Vehicle::setBrand(std::string brand) 
	{
		_brand=brand;
	}

