/*!
\file Pair.cpp
\brief Impelentation of Pair struct
*/
#include <iostream>
#include <string>
#include "Pair.h"

using namespace std;

template<typename T, typename U>
ostream& operator<<(ostream& os, const Pair<T,U> &r)
{
	return os << "(" << r.first << ", " << r.second << ")";
}

int main()
{
	Pair<int, int> p1();
	string key = "Key";
	double value = 5.0;
	Pair<string, double> p2(key, value);

	cout << p1 << endl;
	//cout << p2 << endl;

	return 0;
}