#include <iostream>
#include "Person.h"

Person::Person(std::string fullName, unsigned short weight)
	: _fullName(fullName), _weight(weight), _isTiedUp(false)
{
	std::cout << _fullName << ": " << std::endl;
}
void Person::say(std::string message)
{
	std::cout << _fullName << ": " << message << std::endl;
}