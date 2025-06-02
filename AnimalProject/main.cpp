#include "AnimalStudio.h"
#include "Cat.h"
#include "Dog.h"
#include "Crocodile.h"

int main() {
	AnimalStudio studio;
	//Animal animal("Animal");
	//Dog dog1("Pushok");
	//Cat cat1("Sharly");
	//Dog dog2("Laika");
	//Dog dog3("Sharik");
	//Crocodile crocodile("Aligator");
	//Cat cat2("Adel");
	//Cat cat3("Masha");

	Animal** animals;
	int size = 8;
	/*animals = new Animal * [size] {&dog1, & cat1, & animal, & dog2, & dog3,
		& cat2, & cat3, & crocodile};*/

	animals = new Animal * [size] {new Dog("Sharly"), new Cat("Adel"),
		new Crocodile("Aligator")};


	studio.justDoIt(animals, size);

	return 0;
}