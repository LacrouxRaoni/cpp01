#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void){
	Zombie* zombie = newZombie("Bardo");
	zombie->announce();
	randomChump("DuBardo");
	delete zombie;

}