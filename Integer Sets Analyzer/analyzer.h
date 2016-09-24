#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class Analyzer
{
public:
	Analyzer();
	~Analyzer();

	void init_inputFile(string fileName);
	void startAnalyzing();

private:
	
	string fileName = NULL;
};