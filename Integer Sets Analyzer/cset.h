#pragma once
#include <set>
#include "cmultiset.h"

//template <class MultiSet<int>>

class Set : public set<MultiSet<int>>
{
private:
	
public:
	Set();
	~Set();

	void add(MultiSet<int> &);
};
