// Integer Sets Analyzer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <set>
#include "cmultiset.h"
#include "cset.h"

using namespace std;

int SIZE = 10;

bool hasLineEnded(char c)
{
	return (c == '\n' || c == '\r' || c == '\0' || c == EOF);
}

bool isDelmiter(char c)
{
	return (c == ',' || hasLineEnded(c));
}

bool getNextNumber(ifstream & inStream, string & charContainer)
{
	for (int i = 0; i < SIZE; ++i)
	{
		char ch = inStream.get();

		if (!isDelmiter(ch))
		{
			charContainer += ch;
		}
		else
		{
			charContainer += '\0';
			return hasLineEnded(ch);
		}
	}

	return true;
}

int main()
{
	string fileName = "input.txt";

	ifstream inputStream;

	set<MultiSet <int>> intSet;

	inputStream.open(fileName);

	string charNumber;

	if (inputStream.is_open())
	{
		while (!inputStream.eof())
		{
			MultiSet <int> multipleValueAllowedSet;

			multipleValueAllowedSet.clear();

			while (true)
			{
				int i = 0;
				int number;

				bool hasLineEnded = getNextNumber(inputStream, charNumber);

				try {
					number = atoi(charNumber.c_str());

					cout << charNumber << endl;

					multipleValueAllowedSet.insert(number);
				}
				catch (char * msg) {
					cout << "Error : " << msg << endl
						<< "On Iteration " << i << endl;

					_getch();
					break;
				}

				charNumber.clear();

				if (hasLineEnded)
					break;
				i++;
			}

			intSet.insert(multipleValueAllowedSet);
		}

		cout << "---------------------------------------------------------------------" << endl
			<< "---------------------------READ COMPLETE-----------------------------" << endl
			<< "---------------------------------------------------------------------" << endl;

		for (set<MultiSet <int>>::iterator it = intSet.begin(); it != intSet.end(); ++it)
		{
			MultiSet<int> tempSet = *it;

			for (MultiSet<int>::iterator jt = tempSet.begin(); jt != tempSet.end(); ++jt)
			{
				cout << *jt << " ";
			}

			cout << endl;

			tempSet.clear();
		}
	}
	else
	{
		cout << "Error opening : " << fileName.c_str() << endl;
	}

	intSet.clear();

	inputStream.close();

	fileName.clear();

	charNumber.clear();

	cout << endl;

	_getch();

    return 0;
}

