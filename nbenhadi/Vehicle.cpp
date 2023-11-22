#include <iostream>
#include <string>
#include "Person.hpp"
#include "Vehicle.hpp"

Vehicle::Vehicle(std::string brand, int weight, unsigned short maxPassengers)
	:_brand(brand), _weight(weight), _passengers(), _maxPassengers(maxPassengers)
{};

void Vehicle::addPassenger(Person& person, bool newIsTiedUp)
{	
	int numberPassengers = getPassengerCount();

	if (numberPassengers == _maxPassengers)
	{
		std::cout << "The " << getBrand() << " vehicle is full.No more passengers can be added." << std::endl;
	}
	else
	{
		const_cast<Person&>(person).setIsTiedUp(newIsTiedUp);

		_passengers.push_back(person);
		std::cout << "Passenger " << person.getFullName() << " has been added in " << getBrand() << " vehicle." << std::endl;
	}

};

/*void Vehicle::removePassenger(Person name)
{
	bool passengerExists = (std::find(_passengers.begin(), _passengers.end(), name) != _passengers.end());

	if (!passengerExists)
	{
		std::cout << "The passenger " << name.getFullName() << " is not in the vehicle." << std::endl;
	}
	else
	{
		_passengers.remove(name);
		std::cout << "The passenger " << name.getFullName() << " got out of the vehicle" << std::endl;
	}
}*/

Vehicle Vehicle::collide(Vehicle otherVehicle, int speed1, int speed2)
{
	int momentum1 = this->getMomentum(speed1);
	int momentum2 = otherVehicle.getMomentum(speed2);

	if (momentum1 > momentum2)
	{
		return *this;
	}
	else if (momentum1 < momentum2)
	{
		return otherVehicle;
	}
}

std::string Vehicle::getBrand()
{
	return _brand;
};

std::list<Person>& Vehicle::getPassengers()
{
	return _passengers;
}

unsigned short Vehicle::getMaxPassengers()
{
	return _maxPassengers;
};

int Vehicle::getEmptyWeight()
{
	return _weight;
}

int Vehicle::getWeight()
{
	int totalWeight = _weight;

	for (const auto& passenger : _passengers)
	{
		totalWeight += const_cast<Person&>(passenger).getPersonWeight();
	}

	return totalWeight;
}

int Vehicle::getMomentum(int speed)
{
	return speed * this->getWeight();
}

int Vehicle::getPassengerCount()
{
	return _passengers.size();
}

void Vehicle::setBrand(std::string newBrand)
{
	_brand = newBrand;
};