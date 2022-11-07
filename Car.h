#pragma once
#include <string>
using namespace std;

class Car {
	string imagePath; //??
	int x, y;
public:
	Car(string imagePath, int x, int y);

	string GetImagePath();
	int GetX();
	int GetY();

	void SetCoords(int x, int y);
	void SetPath(string path);
};