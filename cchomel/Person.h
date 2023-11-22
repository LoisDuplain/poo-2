#pragma once

#include <string>

class Person
{
private:

	std::string _fullName;
	unsigned short _weight;
	bool _isTiedUp;

public:
	Person(std::string fullName, unsigned short weight);

	const std::string getFullName() const;
	const unsigned short getWeight() const;
	const bool getIsTiedUp() const;

	void say(std::string message);
};