#include "Day2.h"
#include <iostream>
#include <fstream>
#include <vector>

Day2::Day2()
{

}

Day2::~Day2()
{

}

void Day2::RunProgram()
{
	std::ifstream inFile;
	std::string line;

	// open the input file
	inFile.open(inputFilePath, std::iostream::out);

	if (inFile.is_open())
	{
		std::cout << "File Opened" << std::endl;

		// iterate through each line
		while (std::getline(inFile, line))
		{
			ValidateRows(line);
		}
	}
}

bool Day2::ValidateRows(std::string line)
{
	std::vector<int> arr;

	return false;
}
