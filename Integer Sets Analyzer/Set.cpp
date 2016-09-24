#pragma once
#include "stdafx.h"
#include "cset.h"

using namespace std;

template <class Type>
Set<Type>::Set()
{

}

template <class Type>
Set<Type> :: ~Set()
{

}

template <class Type>
void Set<Type> :: add(Type & entry)
{
	set<Type>::insert(entry);

	//cout << "Result" + result;
}