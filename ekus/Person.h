#pragma once
#include <string>

class Person
{
private :
	std::string _fullName;
	unsigned short _weight;
	bool _isTiedUp;
public:
	Person(std::string fullName, unsigned short weight);

	const std::string getfullName1() const;
	const unsigned short getweight1() const;
	const bool isTiedUp1() const;

	void setfullName(std::string fullName);
	void setweight(unsigned short weight);

	void say(std::string message);

};
