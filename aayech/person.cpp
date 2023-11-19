#include <iostream>
#include "person.h"

person::person(std::string fullname, unsigned short weight)
	: _fullname(fullname), _weight(weight), _IsTiedUP(false)

void person::say(std::string message)
{
	std::cout << _fullname << ":" << message << std::endl;
}

const std::string person::getFullName() const
{
	return _fullname;
}

const unsigned short person::getWeight() const
{
	return _weight;
}


const bool person::isTiedUP() const
{
	return _isTiedUP;
}

void person::setFullName(std::string Fullname)
{
	_fullname = Fullname;
}
void person::setWeight(unsigned short Weight)
{
	_weight = Weight;

}
