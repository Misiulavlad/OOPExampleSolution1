#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
	Cat(string name) : Animal(name) {}

	void getVoice() override {
		cout << "Myaw... myaw... myaw..." << endl;
	}
};
