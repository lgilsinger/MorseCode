#include <iostream>
#include<fstream>
#include<string>
#include<map>
#include "MorseTree.h"
using namespace std;


int main() {
	ifstream fin("morse.txt");
	MorseTree morseTree;
	string tempLine;
	string code;
	string tempCode;
	char letter;

	while (fin.good())
	{
		fin >> tempLine;

		for(int 1 = 0; i <= line.size(); i++)
		{
			if (isalnum(line[i]))
			{
				letter = line[i];
			}
			else
			{
				code += line[i];
			}
			morseTree.BuildTree(letter, code);
			code = ""; //clear the code
		}
	}
}


