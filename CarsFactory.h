#pragma once
#include "Car.h"

class CarsFactory {
	string _directory = "C:\\Users\\Сергей\\Pictures\\Cars\\";
public:
	Car GetNewCar(int _val) {
		string path = _directory;
		switch (_val)
		{
		case 1:
			path += "greenCar.png";
		case 2:
			path += "redCar.png";
		case 3:
			path += "yellowCar.png";
		default:
			break;
		}
		Car car(path, 0, 0);
		return car;
	}
};