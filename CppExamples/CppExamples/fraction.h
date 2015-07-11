#pragma once
#include <iosfwd>

//odev sorusu

class Fraction {
	int m_nom, m_denom;
	static int m_min;
	static int m_max;
	const Fraction &simplify()const{		
		int g = gcd(m_nom, m_denom);
		if (g != 1)	{ Fraction temp(*this); temp.m_nom /= g; temp.m_denom /= g; return temp; }
		else return *this;
	}
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

	Fraction &operator+=(const Fraction &r){
		if (m_denom == r.m_denom){
			m_nom += r.m_nom;
			return *this;
		}
		else{
			int l = lcm(m_denom, r.m_denom);
			m_nom *= l / m_denom;
			m_nom += (r.m_nom * l / r.m_denom);	
			m_denom = l;
			return *this;
		}
	}
	Fraction &operator-=(const Fraction &r){
		if (m_denom == r.m_denom){
			m_nom -= r.m_nom;
			return *this;
		}
		else{
			int l = lcm(m_denom, r.m_denom);
			m_nom *= l / m_denom;
			m_nom -= (r.m_nom * l / r.m_denom);
			m_denom = l;
			return *this;
		}
	}
	Fraction &operator*=(const Fraction &r){
		m_nom *= r.m_nom;
		m_denom *= r.m_denom;
		return *this;
	}
	Fraction &operator/=(const Fraction &r);

	Fraction &operator++(){ // prefix
		m_nom += m_denom;
		return *this;
	}
	Fraction operator++(int){ //postfix 
		Fraction temp(*this);
		m_nom += m_denom;
		return temp;
	}
	Fraction &operator--(){ // prefix
		m_nom -= m_denom;
		return *this;
	}
	Fraction operator--(int) {//postfix
		Fraction temp(*this);
		m_nom -= m_denom;
		return temp;
	}
	
	static int gcd(int a, int b);
	static int lcm(int a, int b);
	static Fraction random();  // return a random fractional number?
	int nominator()const { return m_nom; }
	int denominator()const { return m_denom; }
	operator double()const { return (double)m_nom / m_denom; }

	friend std::ostream &operator<<(std::ostream &, const Fraction &);
	friend std::istream &operator>>(std::istream &, Fraction &);


};



class DivideByZero {
};