#pragma once
#include <iosfwd>	// include iosfwd instead of iostream in your header files


class Myint {
	int mval;	// variable in private section
public:
	Myint(int val = 0) : mval{ val } {}	 // constructor. it is a constructor with one argument. these constructors have a 
										// special meaning: they are called conversion constructor. they let you create class
										// objects with the argument type variables
	friend bool operator<(const Myint &r1, const Myint &r2)	// as a rule of thumb implement all symmetric operator functions
	{														// in global scope and give them friendship
		return r1.mval < r2.mval;
	}

	friend bool operator<=(const Myint &r1, const Myint &r2)	// with only one operator function you can almost implement
	{															// all other operator functions. for example r1 <= r2
		return !(r2 < r1);										// means r2 > r1 means !(r2 < r1)
	}

	friend bool operator>(const Myint &r1, const Myint &r2)
	{
		return r2 < r1;
	}
	friend bool operator>=(const Myint &r1, const Myint &r2)	// r1 >= r2 -> r2 < r1
	{
		return !(r1 < r2);
	}

	friend bool operator==(const Myint &r1, const Myint &r2)	// == -> neither of them is less than the other
	{
		return !(r1 < r2) && !(r2 < r1);
	}

	friend bool operator!=(const Myint &r1, const Myint &r2)	// if either of them is less than the other they are not equal
	{
		return (r1 < r2) || (r2 < r1);
	}

	friend Myint operator+(const Myint &r1, const Myint &r2)	// arithmetic operator functions will return class objects
	{
		/*Myint retval(r1);
		retval += r2;
		return retval;*/
		// create a temporary class object. that object will be copied from r1. += is implemented already
		return Myint(r1) += r2;	// this method is commonly used: implement += (or -=) first and then use it in + (-) operator	
	}							// overload functions	


	friend Myint operator-(const Myint &, const Myint &);
	friend Myint operator/(const Myint &, const Myint &);
	friend Myint operator*(const Myint &, const Myint &);
	friend Myint operator%(const Myint &, const Myint &);

	Myint &operator+=(const Myint &r)
	{
		mval += r.mval;
		return *this;
	}

	Myint &operator-=(const Myint &r);
	Myint &operator*=(const Myint &r);
	Myint &operator/=(const Myint &r);

	Myint &operator++()	// prefix. increment first then return object itself
	{
		mval++;
		return *this;
	}

	Myint operator++(int)	// postfix
	{
		return mval++;	// a temporary object is created automatically with the value of mval by using conversion constructor
	}					// and it is returned. then object variable is incremented.

	/*Myint operator++(int)
	{
	Myint temp(*this);	create a temp object from our object (copy constructor)
	++mval;				increase our object's member variable
	return temp;		return temp object. this method ensures that the class object is used as it is first 
	}*/					// and then its variable is incremented

	Myint &operator--();
	Myint operator--(int);  //postfix

	friend std::ostream &operator<<(std::ostream &, const Myint &r);	// if you want to print your objects and get new objects
	friend std::istream &operator>>(std::istream &, Myint &r);			// with cin you need to overried << and >> operators

	operator void *()const	// type conversion ??
	{
		if (mval)
			return (void *)this;

		return nullptr;
	}




};
