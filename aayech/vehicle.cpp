#include <iostream>
#include "vehicle.h"

vehicle::vehicle(std::string brand, unsigned short weight, std::list<person> passengers, unsigned short Maxpassengers)
	:_brand(brand), _weight(weight), _Maxpassengers(Maxpassengers)
{
}
	const std::string vehicle::getbrand() const
	{
		return _brand;

	}
	const unsigned short vehicle ::getMaxpassengers() const
	{
		return _Maxpassengers;
}
