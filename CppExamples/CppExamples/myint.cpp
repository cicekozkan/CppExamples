#include "myint.h"
#include <iostream>

using namespace std;

ostream &operator<<(ostream &os, const Myint &r)
{
	return os << "(" << r.mval << ")";
}

istream &operator>>(istream &is, Myint &r)
{
	return is >> r.mval;
}
