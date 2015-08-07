#include "date.h"
#include <iostream>

using namespace std;

bool operator<(const Date &r1, const Date &r2)
{
	if (r1.getYear() < r2.getYear())
	{
		return true;
	}
	else if (r1.getYear() == r2.getYear()){
		if (r1.getMonth() < r2.getMonth())
		{
			return true;
		}
		else if (r1.getMonth() == r2.getMonth())
		{
			if (r1.getMonthDay() < r2.getMonthDay())
			{
				return true;
			}
		}
	}
	return false;
}


ostream& operator<<(ostream& os, const Date& d)
{
	return os << d.getMonth() << "/" << d.getMonthDay() << "/" << d.getYear();
}

int main()
{
	Date d1(7, 11, 1988);
	Date d2(7, 11, 1987);

	cout << d1 << endl;
	cout << d2 << endl;
	cout << (d1 < d2) << endl;

	getchar();

	return 0;
}