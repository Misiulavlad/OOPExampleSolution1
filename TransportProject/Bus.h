#pragma once
#include "Transport.h"

class Bus : public Transport
{
public:
	int count;
	
	Bus(int tank) : Transport(tank) {}
};