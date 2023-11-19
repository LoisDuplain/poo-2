#pragma once

#include <string>

class person
{
private:
	std::string _fullname;
	unsigned short _weight;
	bool _isTiedUP;

public:
	person(std::string fullname, unsigned short weight, );

	const std::string getFullName() const;
	const unsigned short getWeight() const;
	const bool isTiedUP() const;

	void setFullName(std::string fullname);
	void setWeight(unsigned short Weight);


	void say(std::string message);
};