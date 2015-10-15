/*!
\file Pair.h
\brief Header file of Pair struct
*/
#pragma once
#include<iosfwd>

/**
* Pair struct; groups two variables in a pair (a,b)
*/
template<typename T, typename U>
struct Pair{
	T first;	///< First element
	U second;	///< Second element
	/**
	* Default constructor
	*/
	Pair() : first{ T() }, second{ U() }{}	
	/**
	* Parameter constructor
	*/
	Pair(T a, U b) : first{ a }, second{ b }{}
	/**
	* Copy constructor template const overload
	*/
	template<typename X, typename Y>
	Pair(const Pair<X,Y> &r) : first( r.first ), second( r.second ){}		
	/**
	* Copy constructor template 
	*/
	template<typename X, typename Y>
	Pair(Pair<X, Y> &r) : first( r.first ), second( r.second ) {}
	/**
	* Operator assignment function
	*/
	Pair& operator=(const Pair& r){				
		first = r.first;
		second = r.second;
		return *this;
	}
	/**
	* Swap member function; swaps two Pairs
	*/
	void swap(Pair &r){			
		U tempf;
		T temps;
		tempf = this->first;
		temps = this->second;
		this->first = r.first;
		this->second = r.second;
		r.first = tempf;
		r.second = temps;
	}

	//friend std::ostream& operator<<(std::ostream&, const Pair&); We don't need to give friendship since this is a 
																  // struct - all variables are global
	

};
