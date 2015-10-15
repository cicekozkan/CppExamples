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

template<typename T, typename U>
istream& operator>>(istream& is, Pair<T, U> &r)
{
	return is >> r.first >> r.second;
}

template<typename T, typename U>
bool operator<(const Pair<T, U> &p1, const Pair<T, U> &p2)
{
	if (p1.first < p2.first) return true;
	else if (p1.first == p2.first && p1.second < p2.second)	return true;
	else return false;
}

template<typename T, typename U>
bool operator>(const Pair<T, U> &p1, const Pair<T, U> &p2)
{
	return p2 < p1;
}

template<typename T, typename U>
bool operator==(const Pair<T, U> &p1, const Pair<T, U> &p2)
{
	return !(p2 < p1) && !(p1 < p2);
}

template<typename T, typename U>
bool operator!=(const Pair<T, U> &p1, const Pair<T, U> &p2)
{
	return (p2 < p1) || (p1 < p2);
}

template<typename T, typename U>
bool operator<=(const Pair<T, U> &p1, const Pair<T, U> &p2)
{
	return !(p2 < p1);
}

template<typename T, typename U>
bool operator>=(const Pair<T, U> &p1, const Pair<T, U> &p2)
{
	return !(p1 < p2);
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
	
	cout << "Enter two integers to hold them in a Pair" << endl;
	cin >> p3;
	cout << "Pair 3 = " << p3 << endl;

	cout << "p1 < p4 : " << (p1 < p4) << endl;
	cout << "p1 <= p4 : " << (p1 <= p4) << endl;
	cout << "p1 > p4 : " << (p1 > p4) << endl;
	cout << "p1 >= p1 : " << (p1 >= p4) << endl;
	cout << "p1 == p4 : " << (p1 == p4) << endl;
	cout << "p1 != p4 : " << (p1 != p4) << endl;


	return 0;
}