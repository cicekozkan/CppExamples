#pragma once
#include <iosfwd>

//odev sorusu

class Fraction {
	///
	Fraction &simplify();
public:
	Fraction(int nom = 0, int demom = 1);

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
	static Fraction rand();  // 
	int nominator()const;
	int denominator()const;
	operator double()const;


	friend std::ostream &operator<<(std::ostream &, const Fraction &);
	friend std::istream &operator>>(std::istream &, Fraction &);


};



class DivideByZero {
};