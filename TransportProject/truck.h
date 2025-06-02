#pragma once
#include "Transport.h"

class Truck : public Transport
{
public:
	double volume;
	double weight;

	Truck(int tank) : Transport(tank) {};
};
