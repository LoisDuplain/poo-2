#pragma once

#include <string>
#include <list>
#include  "Person.hpp"

class Vehicle
{
private:
	std::string _brand; 
	int _weight;
	std::list<Person> _passengers;
	unsigned short _maxPassengers;

public:
	Vehicle(std::string brand, int weight, unsigned short maxPassengers);

	std::string getBrand();
	std::list<Person>& getPassengers();
	unsigned short getMaxPassengers();
	int getEmptyWeight();
	int getWeight();
	int getMomentum(int speed);
	int getPassengerCount() const;

	void setBrand(std::string newBrand);

	void addPassenger(const Person& person, bool newIsTiedUp);
	/*void removePassenger(Person name);*/
	virtual Vehicle collide(Vehicle otherVehicle, int speed1, int speed2);
};