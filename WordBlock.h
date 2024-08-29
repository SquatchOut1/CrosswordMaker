#pragma once
#include <iostream>
#include "Cords.h"
using namespace std;

class WordBlock
{
public:
	WordBlock(string word, string rest);
	bool FindCross(string input, Cords cords[]);

private:
	void WorkingWords(string rest);
};

