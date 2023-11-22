#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Person.hpp"
#include "Vehicle.hpp"

Person::Person(std::string fullName, int weight)
	:_fullName(fullName), _weight(weight), _isTiedUp(false), _maxHealth(100), _health(100), _isDead(false)
{};

std::string Person::say(std::string message)
{
	return getFullName() + ": " + message;
};

unsigned short Person::takeDamage(unsigned short health, int speedDifference)
{
    unsigned short newHealth = health;
    std::string message;

    if (getHealth() <= 0 && getHealth() > getMaxHealth() || isDead()) 
    {
        this->setHealth(0);
        this->setIsDead(1);

        message = "Game over, my adventure has come to an end.";
        std::cout << say(message) << std::endl;

        return _health;
    }
    else
    {
        srand(time(0));
        int minBaseDamage = 9;
        int maxBaseDamage = 12;
        int baseDamage = minBaseDamage + rand() % (maxBaseDamage + 1 - minBaseDamage);
        speedDifference = abs(speedDifference);

        int additionalDamage = 0;

        if (speedDifference <= 0)
        {
            additionalDamage = rand() % 3 + 9;
        }
        else if (speedDifference <= 30)
        {
            additionalDamage = rand() % 4 + 14;
        }
        else if (speedDifference <= 60)
        {
            additionalDamage = rand() % 4 + 17;
        }
        else
        {
            additionalDamage = rand() % 5 + 19;
        }

        int damage = baseDamage + additionalDamage;
        newHealth -= damage;
        setHealth(newHealth);
        

        if (newHealth > _maxHealth || newHealth <= 0)
        {
            setHealth(0);
            setIsDead(1);

            message = "Game over, my adventure has come to an end.";
            std::cout << say(message) << std::endl;
        }
        else 
        {
            message = "Ouch! I lost ";
            say(message);

            setHealth(newHealth);
            std::cout << say(message) << damage << " life points for not being tied up." << " I now have " << getHealth() << " life points." << std::endl;

            return _health;
        }
    }
    return _health;
}


std::string Person::getFullName()
{
	return _fullName;
};

int Person::getPersonWeight()
{
	return _weight;
};

bool Person::getIsTiedUp()
{
	return _isTiedUp;
};

unsigned short Person::getMaxHealth()
{
	return _maxHealth;
}

unsigned short Person::getHealth()
{
	return _health;
}

bool Person::isDead()
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

