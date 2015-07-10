#include "fraction.h"
#include <iostream>
#include <cmath>

using namespace std;

ostream &operator<<(ostream &os, const Fraction &r)
{
	return os << r.m_nom << "/" << r.m_denom;
}

istream &operator>>(istream &is, Fraction &r)
{
	return is >> r.m_nom >> r.m_denom;
}
/*!	
	\fn int Fraction::gcd(int a, int b)
	\brief: Returns greatest common divisor of a and b using Euclid's algorithm
	\param a: an integer
	\param b: an integer
	\return: greatest common divisor of a and b
*/
int Fraction::gcd(int a, int b)
{
	if (a == 0 && b != 0)	return abs(b);
	else if (b == 0 && a != 0)	return abs(a);
	else if (a == 0 && b == 0){ return -1; }	// gcd(0,0)??? wtf

	int bigger, smaller;
	if (a == b)	return a;
	else if (a > b){ bigger = a; smaller = b; }
	else { bigger = b; smaller = a; }
	
	int remainder = bigger % smaller;
	if (remainder == 0)	return smaller;
	else return gcd(smaller, remainder);
}

int main()
{
	Fraction f1(3, 7);
	int a = 0, b = 0;
	cout << f1 << endl;
	cout << "Enter a new fractional number: " << endl;
	cin >> f1;
	cout << f1 << endl;
	cout << "nominator = " << f1.nominator() << endl;
	cout << "denominator = " << f1.denominator() << endl;
	cout << "double conversion = " << (double)f1 << endl;
	cout << "enter 2 numbers" << endl;
	cin >> a >> b;
	cout << "gcd(" << a << "," << b << ") = " << Fraction::gcd(a, b) << endl;
	cin >> a;
	return 0;
}