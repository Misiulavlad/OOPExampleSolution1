#pragma once
#include "main.h"
class Figure
{
public:
	virtual ~Figure() = default;

	virtual int area() { return 0; }
	virtual int perimetr() { return 0; }
	virtual double distanceFromOrigin() = 0;
	virtual string printInfo() = 0;
	virtual string getType() = 0;
};