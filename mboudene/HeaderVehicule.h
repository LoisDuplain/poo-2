#include <string>
#include <list>
#include "Header.h"
using namespace std;

class Vehicule {

private:
	string _brand;
	unsigned short _weight;
	std::list<Person> _passengers;
	unsigned short _maxPassengers;


public:
	Vehicule(string Brand, unsigned short Weight, list<Person> Passengers, unsigned short MaxPassengers);


	const string getBrand() const;
	const unsigned short getMaxPassengers() const;
	unsigned short getMaxPassengers = 0;


	void setBrand(string Brand);
	void addPassenger(Person)

}

