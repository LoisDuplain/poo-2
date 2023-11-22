#pragma once

#include <string>

class Person
{
private:
    std::string _fullName;
    int _weight;
    bool _isTiedUp;
    const unsigned short _maxHealth;
    unsigned short _health;
    bool _isDead;

public:
    Person(std::string fullName, int weight);

    std::string say(std::string message);
    unsigned short takeDamage(unsigned short health, int speedDifference);

    std::string getFullName();
    int getPersonWeight();
    bool getIsTiedUp();
    unsigned short getMaxHealth();
    unsigned short getHealth();
    bool isDead();

    void setFullName(std::string newFullName);
    void setWeight(int newWeight);
    void setIsTiedUp(bool newIsTiedUp);
    void setHealth(unsigned short newHealth);
    void setIsDead(bool isDead);
};