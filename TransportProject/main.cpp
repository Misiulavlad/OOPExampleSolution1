#include "GasStation.h"
#include "Bus.h"
#include "Car.h"
#include "Truck.h"
#include "Plane.h"

#include <iostream>
using namespace std;

int main() {
	const int size = 4;
	Transport* tr1 = new Car(50);
	Transport* tr2 = new Truck(500);
	Transport* tr3 = new Bus(450);
	Plane* plane = new Plane(9000);

	Transport* transports[size]{ tr1, tr2, tr3, plane };


	GasStation station;

	int total = station.calculateTotalGas(transports, size);

	cout << "Total gas is " << total << endl;

	return 0;
} 