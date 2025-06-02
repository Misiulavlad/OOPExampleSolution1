#pragma once
#include "Dog.h"
#include "Cat.h"

// OCP
class AnimalStudio
{
public:
	void justDoIt(Animal** animals, int size) {
		for (int i = 0; i < size; i++)
		{
			animals[i]->getVoice();
		}
	}
};