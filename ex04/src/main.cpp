#include "File.hpp"

int main(int argc, char *argv[]){
	File file;

	if (argc == 4)
	{
		if (!file.s1s2Handler(argv))
			return 1;
		if (!file.fileValidator(argv))
			return 1;
		file.findS1ParamInFile();
		file.copyFile();
	}
	else
		errorPrinter(-1);
	return 0;
}