#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void){
	Zombie *zombie = zombieHorde(3, "Barto");
	delete[] zombie;
}