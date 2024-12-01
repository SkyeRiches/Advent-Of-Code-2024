#ifndef Day1_H
#define Day1_H
#include <string>
#include <vector>

class DayOne
{
	public:
		DayOne();
		~DayOne();

		void RunProgram();

	private:
		const std::string inputFilePath = "Inputs/D1Input.txt";
		std::vector<int> col1;
		std::vector<int> col2;
		std::vector<int> occurrences;
		int diff = 0;
		int totCol1 = 0;

		void SplitLine(std::string s);
		void SortArrs();
		void FindDiff();
		void Occurence();
		void TotalCol1();
	};

#endif