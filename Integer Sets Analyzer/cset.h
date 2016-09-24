#pragma once
#include <set>
#include "cmultiset.h"

template <class Type>

class Set : public set<Type>
{
private:
	
public:
	Set();
	~Set();

	void add(Type &);
};
