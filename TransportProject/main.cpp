#include "GasStation.h"
#include <iostream>
using namespace std;
int main() {
	const int size = 3;

	car cars[size]{ car(40),car(50),car(45) };

	Bus buses[size]{ Bus(255),Bus(250),Bus(300) };

	truck trucks[size]{ truck(300),truck(400),truck(500) };

	Plane planes[size]{ Plane(2000),Plane(3000),Plane(2860) };

	GasStation station;

	int total = station.calculateTotalGas(cars, buses, trucks,planes,size);
	cout << "Total: " << total<<endl;

	return 0;
} 