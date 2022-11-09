#include "Harl.hpp"

int main(int argc, char *argv[]){
	Harl harl;

	switch (argc)
	{
		case 2:
			harl.complain(argv[1]);
			break;
		default:
			harl.complain("invalid");
			break;
	}
}
