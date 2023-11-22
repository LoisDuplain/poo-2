#include "person.h"
#include <iostream>

using namespace std;

Person::Person(const string &fullName, int weight, bool isTiedUp)
    : _fullName(fullName), _weight(weight), _isTiedUp(isTiedUp) {}

string Person::getFullName() const {
    return _fullName;
}

int Person::getWeight() const {
    return _weight;
}

bool Person::isTiedUp() const {
    return _isTiedUp;
}

void Person::setFullName(const string &fullName) {
    _fullName = fullName;
}

void Person::setWeight(int weight) {
    _weight = weight;
}

void Person::setIsTiedUp(bool isTiedUp) {
    _isTiedUp = isTiedUp;
}

void Person::say(const std::string &message) const {
    cout << "<" << _fullName << ">: " << message << endl;
}
