#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string _name;

	public:
	
		Zombie();
		~Zombie();

		std::string getName();
	
		void announce(void);
		void insertName(std::string name);
};

#endif