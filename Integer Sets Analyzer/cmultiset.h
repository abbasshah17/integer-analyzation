#pragma once
#include <set>

template <class Type>

class MultiSet : public multiset<Type>
{
private:

public:
	bool operator == (MultiSet <Type> &);
	bool operator > (MultiSet <Type> &);
	bool operator < (MultiSet <Type> &);
	//MultiSet& operator ++();
};
