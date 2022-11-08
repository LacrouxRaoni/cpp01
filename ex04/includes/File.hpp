#ifndef FILE_HPP
#define FILE_HPP

#include <fstream>
#include <string>
#include "Error.hpp"

class File{

	private:
		std::fstream file;
		std::fstream fileReplace;
		std::string fileBuffer;
		std::string fileReplaceName;
		std::string line;
		std::string buffS1;
		std::string buffS2;

	public:
		File();
		~File();

		bool fileValidator(char **argv);
		bool s1s2Handler(char **argv);
		void handleExtension(std::string fileName);
		bool getBufferFile();
		void findS1ParamInFile();
		void copyFile();
};

#endif