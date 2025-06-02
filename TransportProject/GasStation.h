#pragma once
#include "car.h"
#include "truck.h"
#include "Bus.h"
#include "Plane.h"
class GasStation
{
public:
	int calculateTotalGas(car* cars, Bus* buses, truck* trucks, Plane* planes, int size) {
		int total = 0;

		for (int i = 0; i < size; i++) {
			total += cars[i].volume;
		}

		for (int i = 0; i < size; i++) {
			total += buses[i].tank;
		}

		for (int i = 0; i < size; i++) {
			total += trucks[i].gas;
		}

		for (int i = 0; i < size; i++) {
			total += planes[i].tank;
		}

		return total;
	}
};

