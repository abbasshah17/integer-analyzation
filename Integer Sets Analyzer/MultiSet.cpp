#pragma once
#include "stdafx.h"
#include "cmultiset.h"

using namespace std;

template <class Type>
bool MultiSet<Type>::operator == (MultiSet<Type> & cmpSet)
{
	cout << "==";
	if (this->size() != cmpSet.size())
	{
		return false;
	}

	for (multiset<Type>::iterator it = this->begin(), jt = cmpSet.begin(); it != this->end() && jt != cmpSet.end(); ++it, ++jt)
	{
		if (*it != *jt) {
			return false;
		}
	}

	return true;
}

template <class Type>
bool MultiSet<Type>::operator < (MultiSet<Type> & cmpSet)
{
	cout << "<";
	if (this->size() < cmpSet.size())
	{
		return true;
	}
	else if (this->size() > cmpSet.size())
	{
		return false;
	}

	for (multiset<Type>::iterator it = this->begin(), jt = cmpSet.begin(); it != this->end(), jt != cmpSet.end(); ++it, ++jt)
	{
		if (*it < *jt)
			return true;
	}

	return false;
}

template <class Type>
bool MultiSet<Type>::operator > (MultiSet<Type> & cmpSet)
{
	cout << ">";
	if (this->size() > cmpSet.size())
	{
		return true;
	}
	else if (this->size() < cmpSet.size())
	{
		return false;
	}

	for (multiset<Type>::iterator it = this->begin(), jt = cmpSet.begin(); it != this->end() && jt != cmpSet.end(); ++it, ++jt)
	{
		if (*it > *jt)
		{
			return true;
		}
	}

	return false;
}

//MultiSet<Type>& MultiSet<Type>::operator ++ ()
//{
//	this->
//}