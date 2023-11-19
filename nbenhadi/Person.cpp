#include <iostream>
#include "Person.hpp"

Person::Person(std::string fullName, int weight)
	:_fullName(fullName), _weight(weight), _isTiedUp(false), _maxHealth(100), _health(100), _isDead(false)
{};

std::string Person::Say(std::string message)
{
	return getFullName() + ": " + message;
};

unsigned short Person::takeDamage(unsigned short _health)
{
	unsigned short newHealth = _health;
	std::string message;

	if (_health <= 0) {
		newHealth = 0;
		_isDead = true;

		message = "Game over, my adventure has come to an end.";
		std::cout << Say(message) << std::endl;
	}
	else {
		newHealth -= 15;

		if (newHealth > _maxHealth)
		{
			newHealth = 0;

			message = "Game over, my adventure has come to an end.";
			std::cout << Say(message) << std::endl;
		}
		else 
		{
			message = "Ouch! I lost 15 life points for not being tied up.";
			Say(message);

			setHealth(newHealth);
			std::cout << Say(message) << " I now have " << getHealth() << " life points." << std::endl;
		}
	}
	return _health;
}

//----------------------------------------------------------------- GETTER AND SETTER
std::string Person::getFullName() const
{
	return _fullName;
};

int Person::getPersonWeight() const
{
	return _weight;
};

bool Person::getIsTiedUp() const
{
	return _isTiedUp;
};

unsigned short Person::getMaxHealth() const
{
	return _maxHealth;
}

unsigned short Person::getHealth() const
{
	return _health;
}

bool Person::isDead() const
{
	return _isDead;
}



void Person::setFullName(std::string newFullName)
{
	_fullName = newFullName;
}

void Person::setWeight(int newWeight)
{
	_weight = newWeight;
};

void Person::setIsTiedUp(bool newIsTiedUp)
{
	_isTiedUp = newIsTiedUp;
};

void Person::setHealth(unsigned short newHealth)
{
	_health = newHealth;
}

void Person::setIsDead(bool isDead)
{
	_isDead = isDead;
}

