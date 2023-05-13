#include<iostream>

#include "HomePet.h"
#include "Dog.h"
#include"Cat.h"
#include "Ara.h"
#include "Homyak.h"

using namespace std;

int main()
{
	HomePet** pets = new HomePet * [4] 
	{
		new Dog("Dog", "Bublyc", "Gav-gav"),
			new Cat("Cat", "Sasha", "Mur-mur"),
			new Ara("Bird", "Max", "Car-car"),
			new Homyak("Gryzun", "Anatel", "Gryz`-gryz`")

	};
	for (size_t i = 0; i < 4; i++)
	{
		pets[i]->about();
	}
	for (size_t i = 0; i < 4; i++)
	{
		delete pets[i];
	}
	
	return 0; 
}