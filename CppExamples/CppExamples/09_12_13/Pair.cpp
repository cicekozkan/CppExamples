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
	Pair<double, double> p4(1.2, 2.3);
	
	cout << "Pair 1 = " << p1 << endl;
	cout << "Pair 2 = " << p2 << endl;
	cout << "Pair 3 = " << p3 << endl;
	cout << "Pair 4 = " << p4 << endl;


	cout << "Swap Pair 1 and Pair 4" << endl;
	p1.swap(p4);
	cout << "Pair 1 = " << p1 << endl;
	cout << "Pair 4 = " << p4 << endl;
			
	return 0;
}