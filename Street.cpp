#include "Street.h"

Street::Street(int count)
{
	this->Count = count;
	CarsFactory factory;
	for (size_t i = 0; i < count; i++)
	{
		this->Cars.push_back(factory.GetNewCar(rand() % 3 + 1));
	}
}

void Street::Move(int startVal)
{
	for_each(this->Cars.begin(), this->Cars.end(), [startVal](Car& elem) {
		if(elem.GetX() - 1 < 0)
			elem.SetCoords(startVal, elem.GetY());
		else
			elem.SetCoords(elem.GetX() - 1, elem.GetY());
		});
}
