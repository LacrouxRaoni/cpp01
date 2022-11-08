#include "../includes/File.hpp"

#include <stdio.h>

File::File(){
}

File::~File(){
}

void File::handleExtension(std::string fileName)
{
	int dot = 0;

	dot = fileName.find('.');
	if (dot > 0){
		fileReplaceName.append(fileName, 0, dot);
		fileReplaceName.append(".replace");
	}
	else{
		fileReplaceName.append(fileName);
		fileReplaceName.append(".replace");
	}
}

bool File::getBufferFile()
{
	while (!file.eof())
	{
		std::getline(file, line);
		
		fileBuffer += line;
		fileBuffer += "\n";
	}
	file.close();
	if (fileBuffer.at(0) == 10)
		return false;
	return true;
}

bool File::fileValidator(char **argv){

	file.open(argv[1], std::ios::in);
	if (!file.is_open())
	{
		errorPrinter(-2);
		return false;
	} 
	else if (!getBufferFile())
	{
			errorPrinter(-3);
			return false;
	}
	handleExtension(argv[1]);
	return true;
}

bool File::s1s2Handler(char **argv)
{
	buffS1.append(argv[2]);
	buffS2.append(argv[3]);
	if (buffS1.empty() || buffS2.empty())
	{
		errorPrinter(-4);
		return false;
	}
	return true;
}

void File::findS1ParamInFile()
{
	long unsigned int pos = 0;

	while (1)
	{
		pos = fileBuffer.find(buffS1);
		if (pos == fileBuffer.npos)
			break ;
		fileBuffer.erase(pos, buffS1.length());
		fileBuffer.insert(pos, buffS2);
		pos += buffS2.length();
	}
}

void File::copyFile()
{
	fileReplace.open(fileReplaceName.c_str(), std::ios::app);
	if (!fileReplace.is_open())
	{
		errorPrinter(-2);
		return ;
	}else
	{
		fileReplace << fileBuffer;
		fileReplace.close();
	}

}