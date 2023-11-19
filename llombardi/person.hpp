#pragma once

#include <string>
#include <list>

class Person
{
private:
	std::string _fullName;
	unsigned short _weight;
	bool _isTiedUp;

public:
	Person(std::string fullname, unsigned short weight);

	const std::string getName() const;
	const unsigned short getWeight() const;
	const unsigned short weight() const;
	const bool isTiedUp() const;

	void setName(std::string fullName);

	void say(std::string message);
};