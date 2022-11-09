#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <algorithm>
#include <string>

class Harl{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void message( void );
	public:
		void complain( std::string level );
		int levelToIndex(std::string level);
};

#endif