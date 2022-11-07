#include "HumanB.hpp"

HumanB::HumanB(){
}

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void HumanB::attack(){
	std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}