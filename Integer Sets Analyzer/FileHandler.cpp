#include "stdafx.h"
#include "filehandler.h"

FileHandler::FileHandler()
{
	//state = INIT;
}

FileHandler::~FileHandler()
{
}

void FileHandler::init(int maxLineLength)
{
	this->maxLineLength = maxLineLength;
}
void FileHandler::openFile(string fileName)
{
	this->fileName = fileName;

	inputFileStream.open(fileName);

	if (!inputFileStream.is_open())
	{
		throw "File Doesn't Exist";
	}
	else
	{
		//state = FILE_OPENED;
	}
}

string FileHandler::getNextLine()
{
	char * line = new char[maxLineLength];

	inputFileStream.getline(line, maxLineLength, '\n');

	return NULL;
}

void FileHandler::moveToLine(int lineNumber)
{

}