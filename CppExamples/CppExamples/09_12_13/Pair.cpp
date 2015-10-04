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
	Pair<double, double> p1(2.5, 3.4);
	string key = "Bes";
	double value = 5.0;
	Pair<string, double> p2(key, value);
	Pair<int, int> p3(p1);
	
	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;

		
	return 0;
}