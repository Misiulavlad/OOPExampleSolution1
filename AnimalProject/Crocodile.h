#pragma once
#include "Animal.h"
class Crocodile : public Animal
{
public:
	Crocodile(string name) : Animal(name) {}

	void getVoice() override {
		cout << "Nyam...nyam...nyam..." << endl;
	}
};