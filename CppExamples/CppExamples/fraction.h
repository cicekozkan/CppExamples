#pragma once
#include <iosfwd>

//odev sorusu

class Fraction {
	int m_nom, m_denom;
	static int m_min;
	static int m_max;
	Fraction &simplify();
public:
	Fraction(int nom = 0, int denom = 1) : m_nom{ nom }, m_denom{ denom } {}	// constructor
	// you don't need to create a copy constructor. default copy constructor will do the job
	// no need for destructor too. you don't use any resources
	friend bool operator<(const Fraction &r1, const Fraction &r2);
	friend bool operator<=(const Fraction &r1, const Fraction &r2);
	friend bool operator>(const Fraction &r1, const Fraction &r2);
	friend bool operator>=(const Fraction &r1, const Fraction &r2);
	friend bool operator==(const Fraction &r1, const Fraction &r2);
	friend bool operator!=(const Fraction &r1, const Fraction &r2);

	friend Fraction operator+(const Fraction &r1, const Fraction &r2);
	friend Fraction operator-(const Fraction &r1, const Fraction &r2);
	friend Fraction operator*(const Fraction &r1, const Fraction &r2);
	friend Fraction operator/(const Fraction &r1, const Fraction &r2);

	Fraction &operator+=(const Fraction &r);
	Fraction &operator-=(const Fraction &r);
	Fraction &operator*=(const Fraction &r);
	Fraction &operator/=(const Fraction &r);

	Fraction &operator++();
	Fraction operator++(int); //postfix
	Fraction &operator--();
	Fraction operator--(int); //postfix
	
	static int gcd(int a, int b);
	static Fraction random();  // return a random fractional number?
	int nominator()const { return m_nom; }
	int denominator()const { return m_denom; }
	operator double()const { return (double)m_nom / m_denom; }

	friend std::ostream &operator<<(std::ostream &, const Fraction &);
	friend std::istream &operator>>(std::istream &, Fraction &);


};



class DivideByZero {
};