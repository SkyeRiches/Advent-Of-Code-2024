#include "Day1.h"
#include <iostream>
#include <fstream>
#include <algorithm>

DayOne::DayOne()
{
}

DayOne::~DayOne()
{
}

void DayOne::RunProgram()
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
			SplitLine(line);
		}
	}

	inFile.close();

	SortArrs();
	//FindDiff();
	//std::cout << diff << std::endl;
	Occurence();
	TotalCol1();
	std::cout << totCol1 << std::endl;
}

void DayOne::SplitLine(std::string s) 
{
	int col = 0;
	int end = s.find(" ");
	
	// create substr of the line up until the first space
	int n1 = std::stoi(s.substr(0, end));
	// add to array of colum 1
	col1.insert(col1.end(), { n1 });
	//erase the spaces and first number
	while (end != -1) 
	{
		s.erase(s.begin(), s.begin() + end + 1);
		end = s.find(" ");
	}
	// create substr of the second number
	int n2 = std::stoi(s.substr(0, end));
	col2.insert(col2.end(), { n2 });
}

void DayOne::SortArrs()
{
	// sort the arrays smallest to largest
	std::sort(col1.begin(), col1.end());
	std::sort(col2.begin(), col2.end());	
}

void DayOne::FindDiff()
{
	// for each row, find the difference betwen the two numbers
	for (int i = 0; i < col1.size(); i++)
	{
		if (col1[i] > col2[i])
		{
			diff += col1[i] - col2[i];
		}
		else if (col1[i] < col2[i])
		{
			diff += col2[i] - col1[i];
		}
	}
}

void DayOne::Occurence()
{
	// loop through each row and compare the first number to every number in col2
	for (int i = 0; i < col1.size(); i++)
	{
		int occ = 0;

		for (int j = 0; j < col2.size(); j++)
		{
			// if the number in col 2 is equal to col 1, increase the number of occurences
			if (col1[i] == col2[j])
			{
				occ++;
			}
		}

		occurrences.insert(occurrences.end(), { col1[i] * occ });
	}
}

void DayOne::TotalCol1()
{
	// add up the occurences array
	for (int i = 0; i < occurrences.size(); i++)
	{
		totCol1 += occurrences[i];
	}
}