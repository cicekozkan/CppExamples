#pragma once
#include <iosfwd>


class Myint {
	int mval;
public:
	Myint(int val = 0) : mval(val) {}
	friend bool operator<(const Myint &r1, const Myint &r2)
	{
		return r1.mval < r2.mval;
	}

	friend bool operator<=(const Myint &r1, const Myint &r2)
	{
		return !(r2 < r1);
	}

	friend bool operator>(const Myint &r1, const Myint &r2)
	{
		return r2 < r1;
	}
	friend bool operator>=(const Myint &r1, const Myint &r2)
	{
		return !(r1 < r2);
	}

	friend bool operator==(const Myint &r1, const Myint &r2)
	{
		return !(r1 < r2) && !(r2 < r1);
	}

	friend bool operator!=(const Myint &r1, const Myint &r2)
	{
		return (r1 < r2) || (r2 < r1);
	}

	friend Myint operator+(const Myint &r1, const Myint &r2)
	{
		/*Myint retval(r1);
		retval += r2;
		return retval;*/

		return Myint(r1) += r2;
	}

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

	Myint &operator++()
	{
		mval++;
		return *this;
	}

	Myint operator++(int)
	{
		return mval++;
	}

	/*Myint operator++(int)
	{
	Myint temp(*this);
	++mval;
	return temp;
	}*/

	Myint &operator--();
	Myint operator--(int);  //postfix

	friend std::ostream &operator<<(std::ostream &, const Myint &r);
	friend std::istream &operator>>(std::istream &, Myint &r);

	operator void *()const
	{
		if (mval)
			return (void *)this;

		return nullptr;
	}




};
