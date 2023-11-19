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

    std::string Say(std::string message);
    unsigned short takeDamage(unsigned short damage);

    std::string getFullName() const;
    int getPersonWeight() const;
    bool getIsTiedUp() const;
    unsigned short getMaxHealth() const;
    unsigned short getHealth() const;
    bool isDead() const;

    void setFullName(std::string newFullName);
    void setWeight(int newWeight);
    void setIsTiedUp(bool newIsTiedUp);
    void setHealth(unsigned short newHealth);
    void setIsDead(bool isDead);
};