#pragma once
#include <string>

using namespace std;

class Person {
private:
    string _fullName;
    int _weight;
    bool _isTiedUp;

public:
    Person(const std::string &fullName, int weight, bool isTiedUp = false);

    string getFullName() const;
    int getWeight() const;
    bool isTiedUp() const;

    void setFullName(const std::string &fullName);
    void setWeight(int weight);
    void setIsTiedUp(bool isTiedUp);

    void say(const std::string &message) const;
};