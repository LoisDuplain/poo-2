#include <iostream>
#include "Person.hpp"

Person::Person(std::string fullName, unsigned short weight)
	: _fullName(fullName), _weight(weight), _isTiedUp(false)
{

}
const std::string Person::getName() const
{
	return _fullName;
}

const unsigned short Person::getWeight() const
{
	return _weight;
}

const bool Person::isTiedUp() const
{
	return _isTiedUp;
}

void Person::setName(std::string fullName)
{
	_fullName = fullName;
}

void Person::say(std::string message)
{
	std::cout << _fullName << ": " << message;
}

