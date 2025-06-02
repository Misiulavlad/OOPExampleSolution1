#include "AnimalStudio.h"
#include "Cat.h"
#include "Dog.h"
#include "Crocodile.h"
int main() {
	AnimalStudio studio;

	Animal** animals;
	int size = 8;

	animals = new Animal * [size] {new Dog("Sharly"), new Cat("Adel"),
		new Crocodile("Aligator")};


	studio.justDoIt(animals, size);

	return 0;
}