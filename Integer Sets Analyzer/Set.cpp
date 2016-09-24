#pragma once
#include "stdafx.h"
#include "cset.h"
#include "cmultiset.h"

using namespace std;

//template <class MultiSet<int>>
Set::Set()
{

}

//template <class MultiSet<int>>
Set :: ~Set()
{

}

//template <class MultiSet<int>>
void Set :: add(MultiSet<int> & entry)
{
	set<MultiSet<int>>::insert(entry);

	//cout << "Result" + result;
}