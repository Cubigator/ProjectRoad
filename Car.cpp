#include "Car.h"

Car::Car(string imagePath, int x, int y)
{
	this->imagePath = imagePath;
	this->x = x;
	this->y = y;
}

string Car::GetImagePath()
{
	return this->imagePath;
}

int Car::GetX()
{
	return this->x;
}

int Car::GetY()
{
	return this->y;
}

void Car::SetCoords(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Car::SetPath(string path)
{
	this->imagePath = path;
}
