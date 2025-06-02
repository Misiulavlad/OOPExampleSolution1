#pragma once
#include "main.h"

class Animal
{
public:
	string name;

	Animal(string name) : name(name) {}

	// overriding
	virtual void getVoice() {
		cout << "..." << endl;
	}
};
