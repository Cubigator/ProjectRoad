#pragma once
#include "Car.h"
#include "CarsFactory.h"
#include <list>
#include <algorithm>

class Street
{
	list<Car> Cars;
	int Count;
public:
	Street(int count);
	void Move(int startVal);
};

