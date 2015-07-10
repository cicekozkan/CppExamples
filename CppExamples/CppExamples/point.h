#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

class Point {
public:
	Point(double x = 0., double y = 0.) : mx{ x }, my{ y } {}
	double getx()const { return mx; }
	double gety()const { return my; }
	Point &setx(double x) { mx = x; return *this; }
	Point &sety(double y) { my = y; return *this; }
	Point &setxy(double x, double y) { mx = x, my = y; return *this; }
	double getOriginDistance()const;
	friend std::ostream &operator<<(std::ostream &os, const Point &r)
	{
		return os << "(" << r.mx << ", " << r.my << ")";
	}

	friend std::istream &operator>>(std::istream &is, Point &r)
	{
		return is >> r.mx >> r.my;
	}

private:
	double mx, my;
};
#endif