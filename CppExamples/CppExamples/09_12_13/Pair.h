/*!
\file Pair.h
\brief Header file of Pair struct
*/
#pragma once

/*!
Pair struct; groups two variables in a pair (a,b)
*/
template<typename T, typename U>
struct Pair{
	T first;	///< First element
	U second;	///< Second element
	Pair() : first{ T() }, second{ U() }{}		///< Default constructor
	Pair(T a, U b) : first{ a }, second{ b }{}	///< Parameter constructor	
	template<typename X, typename Y>
	Pair(const Pair<X,Y> &r) : first{ r.first }, second{r.second}{}		///< Copy constructor template	
	Pair& operator=(const Pair& r){				///< Operator assignment function
		first = r.first;
		second = r.second;
	}
	void swap(Pair &r){			///< Swap member function
		U tempf;
		T temps;
		tempf = this->first;
		temps = this->second;
		this->first = r.first;
		this->second = r.second;
		r.first = tempf;
		r.second = temps;
	}

};