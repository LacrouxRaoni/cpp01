#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << "Zombie is dead...again" << std::endl;
}

std::string Zombie::getName(){
	return _name;
}

void Zombie::insertName(std::string name){
	_name = name;
}

void Zombie::announce(void){
	std::cout << this->_name << ": is alive..." << std::endl;
}

