#include "fraction.h"
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int Fraction::m_min = 1;
int Fraction::m_max = 9999;

ostream &operator<<(ostream &os, const Fraction &r)
{
	return os << r.simplify().m_nom << "/" << r.simplify().m_denom;
}

istream &operator>>(istream &is, Fraction &r)
{
	return is >> r.m_nom >> r.m_denom;
}
/*!	
	\fn int Fraction::gcd(int a, int b)
	\brief: Returns greatest common divisor of two integer numbers using Euclid's algorithm
	\param a: an integer
	\param b: an integer
	\return: greatest common divisor of a and b
*/
int Fraction::gcd(int a, int b)
{
	if (a == 0 && b != 0)	return abs(b);
	else if (b == 0 && a != 0)	return abs(a);
	else if (a == 0 && b == 0){ return 0; }	

	int bigger, smaller;
	if (a == b)	return a;
	else if (abs(a) > abs(b)){ bigger = abs(a); smaller = abs(b); }
	else { bigger = abs(b); smaller = abs(a); }
	
	int remainder = bigger % smaller;
	if (remainder == 0)	return smaller;
	else return gcd(smaller, remainder);
}

/*!
\fn int Fraction::lcm(int a, int b)
\brief: Returns least common multiple of two integer numbers
\param a: an integer
\param b: an integer
\return: least common multiple of a and b
*/
int Fraction::lcm(int a, int b)
{
	if (a == 0 && b == 0)	return 0;
	return abs(a*b) / gcd(a, b);
}

/*!
	\fn Fraction Fraction::rand()
	\param: void
	\return: Random fractional number
*/
Fraction Fraction::random()
{
	srand(time(nullptr));
	return Fraction((m_min + rand()%(m_max - m_min)), (m_min + rand()%m_max));
}

Fraction operator+(const Fraction &r1, const Fraction &r2)
{
	return Fraction(r1) += r2;
}

Fraction operator-(const Fraction &r1, const Fraction &r2)
{
	return Fraction(r1) -= r2;
}

Fraction operator*(const Fraction &r1, const Fraction &r2)
{
	return Fraction(r1) *= r2;
}

Fraction operator/(const Fraction &r1, const Fraction &r2)
{
	return Fraction(r1) /= r2;
}

int main()
{
	Fraction f1(3, 5);
	Fraction f2(9,14);
	int a = 5, b = 1;
	/*
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
	cout << "Random fractional = " << Fraction::random() << endl;
	
	cout << "nominator = " << f1.nominator() << endl;
	cout << "denominator = " << f1.denominator() << endl;
	cout << "f1 = " << f1 << endl;
	cout << "++f1 = " << ++f1 << endl;
	cout << "f1++ = " << f1++ << endl;
	cout << "f1 = " << f1 << endl;
	cout << "--f1 = " << --f1 << endl;
	cout << "f1-- = " << f1-- << endl;
	cout << "f1 = " << f1 << endl;
	*/
	//cout << "lcm of " << a << "and " << b << "= " << Fraction::lcm(a, b) << endl;
	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl;
	//cout << "f1+=f2 = " << (f1 += f2) << endl;
	//cout << "f1-=f2 = " << (f1 -= f2) << endl;
	//cout << "f1*=f2 = " << (f1 *= f2) << endl;
	//cout << "f1/=f2 = " << (f1 /= f2) << endl;
	cout << "f1 + f2 = " << f1 + f2 << endl;
	cout << "f1 - f2 = " << f1 - f2 << endl;
	cout << "f1 * f2 = " << f1 * f2 << endl;
	cout << "f1 / f2 = " << f1 / f2 << endl;



	cin >> a;
	return 0;
}