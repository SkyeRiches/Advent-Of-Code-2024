#ifndef DAY2_H
#define DAY2_H

#include <string>

class Day2
{
	public:
		Day2();
		~Day2();

		void RunProgram();

	private:
		const std::string inputFilePath = "Inputs/D2Input.txt";

		bool ValidateRows(std::string line);
	};

	Day2::Day2()
	{
	}

	Day2::~Day2()
	{
	}

#endif // !DAY2_H
