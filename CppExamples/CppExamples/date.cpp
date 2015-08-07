#include "date.h"
#include <iostream>

using namespace std;

const int Date::monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool operator<(const Date &r1, const Date &r2)
{
	if (r1.getTotalDays() < r2.getTotalDays())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator<=(const Date &r1, const Date &r2)
{
	return !(r2 < r1);
}

bool operator>(const Date &r1, const Date &r2)
{
	return r2 < r1;
}

bool operator>=(const Date &r1, const Date &r2)
{
	return !(r1 < r2);
}

bool operator==(const Date &r1, const Date &r2)
{
	return !(r1 < r2) && (r2 < r1);
}

bool operator!=(const Date &r1, const Date &r2)
{
	return (r1 < r2) || (r2 < r1);
}

ostream& operator<<(ostream& os, const Date& d)
{
	return os << d.getMonth() << "/" << d.getMonthDay() << "/" << d.getYear();
}

int main()
{
	Date d1(8, 3, 1705);
	Date d2(7, 11, 1987);

	cout << d1 << endl;
	cout << d2 << endl;
	cout << "d2 < d1 " << (d2 < d1) << endl;
	cout << "d1 year day: " << d1.getYearDay() << endl;
	cout << "d1 total days: " << d1.getTotalDay() << endl;
	cout << "d2 total days: " << d2.getTotalDay() << endl;

	getchar();

	return 0;
}