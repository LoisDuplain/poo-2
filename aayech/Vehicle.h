#pragma once
#include <string>
#include "person.h"
#include <list>

class vehicle
{
private:
	std::string _brand;
	unsigned short _weight;
	std::list <person> _passengers;
	unsigned short _Maxpassengers;
public:
	vehicle(std::string brand, unsigned short weight, std::list <person> _passengers, unsigned short _Maxpassengers );

	const std::string getbrand() const;
	const unsigned short getMaxpassengers() const;

	void setbrand(std::string fullname);
	void setWeight(unsigned short Weight);


	void say(std::string message);
};