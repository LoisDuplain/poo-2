#include <iostream>
#include "Person.h"


Person::Person(std::string fullName, unsigned short weight)
	:_fullName(fullName), _weight(weight), _isTiedUp(false)
{

}

void Person::say(std::string message)
{
	std::cout << _fullName << ": " << message << std::endl;

}




const std::string Person::getfullName1() const
{
	return _fullName;
}

const unsigned short Person::getweight1() const
{
	return _weight;
}

const bool Person::isTiedUp1() const
{
	return _isTiedUp;
}

void Person::setfullName(std::string fullName)
{
	_fullName = fullName;
}

void Person::setweight(unsigned short weight)
{
	_weight= weight;
}
