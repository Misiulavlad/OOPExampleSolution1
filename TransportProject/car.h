#pragma once
#include "Transport.h"

class Car : public Transport
{
public:
	int speed;
	double price;
	

	Car(int tank) : Transport(tank) {};
};
