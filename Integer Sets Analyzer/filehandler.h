#pragma once
#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

class FileHandler
{
public:
	FileHandler();
	~FileHandler();

	void init(int maxLineLength);

	void openFile(string fileName);

	string getNextLine();

	void moveToLine(int lineNumber);

private:

	int maxLineLength = 0;
	string fileName = NULL;
	ifstream inputFileStream;
	ofstream outputFileStream;
	//STATE state;
};

enum STATE
{
	INIT, FILE_OPENED, READING_FILE, WRITING_FILE, INIT_FAILED, READ_ERROR, WRITE_ERROR
};