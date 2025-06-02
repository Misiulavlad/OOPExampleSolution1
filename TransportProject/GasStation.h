#pragma once
#include "Transport.h"

class GasStation
{
public:
	int calculateTotalGas(Transport** transports, int size) {
		int total = 0;

		for (int i = 0; i < size; i++)
		{
			total += transports[i]->tank;
		}

		return total;
	}
};
