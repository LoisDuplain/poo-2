#include <iostream>
#include "Person.hpp"
#include "Vehicle.hpp"
#include "Person.hpp"
#include "Bus.hpp"
#include "1000tipla.hpp"

void main()
{
	
	Person person1("Lois", 65);
	Person person2("Duplain", 85);
	Person person3("Emma", 54);

	Vehicle vehicle1("Peugeot 208", 1160, 5);
	Vehicle vehicle2("Citroen C3", 1090, 5);

	Bus bus1(12500);

	F1000tipla F1(1, 0);
	F1000tipla F2(0, 1);

	vehicle1.addPassenger(person1, true);
	std::cout << "Is Lois tied up ? " << person1.getIsTiedUp() << std::endl;

	vehicle2.addPassenger(person2, 0);
	vehicle2.addPassenger(person3, 1);
	/*bus1.addPassenger(person3, 0);*/

	std::cout << std::endl;

	/*bus1.collide(vehicle1, 70, 90);*/

	F1.collide(vehicle2, 100);
	std::cout << std::endl;
	F1.collide(vehicle2, 300);
}