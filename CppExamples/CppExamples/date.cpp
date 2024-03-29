#include "date.h"
#include <iostream>

using namespace std;

int Date::monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

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
	return os << d.getMonthDay() << "/" << d.getMonth() << "/" << d.getYear();
}

istream& operator>>(istream& is, Date& d)
{
	return is >> d.m_day >> d.m_mon >> d.m_year; // how to throw BadDate in operator>> overload
}

int operator-(const Date &d1, const Date &d2)
{
	return d1.getTotalDays() - d2.getTotalDays();
}

//int main()
//{
//	Date d1(8, 3, 1700);
//	Date d2(7, 11, 1987);
//	Date d3(Date::random());
//	Date d4(Date::random());
//	int days;
//	try{
//		Date d5(1, 1, 1600);
//	}
//	catch(BadDate &r){
//		cout << r.getReason() << endl;
//	}
//	cout << d3 << endl;
//	cout << d4 << endl;
//	//cout << Date::random() << endl;
//
//	/*
//	cout << d1 << endl;
//	cout << d2 << endl;
//	cout << "d2 < d1 " << (d2 < d1) << endl;
//	cout << "d1 year day: " << d1.getYearDay() << endl;
//	cout << "d1 total days: " << d1.getTotalDays() << endl;
//	cout << "d2 total days: " << d2.getTotalDays() << endl;
//	
//
//	cout << "enter day, month and year: ";
//	cin >> d3;
//	cout << "d3: " << d3 << endl;
//	cout << "enter day, month and year: ";
//	cin >> d4;
//	cout << "d4: " << d4 << endl;
//
//	cout << "d3 - d4: " << d3 - d4 << endl;
//	cout << "++d3 " << ++d3 << endl;
//	cout << "d3 " << d3 << endl;
//	cout << "d3++ " << d3++ << endl;
//	cout << "d3 " << d3 << endl;
//	cout << "--d3 " << --d3 << endl;
//	cout << "d3 " << d3 << endl;
//	cout << "d3-- " << d3-- << endl;
//	cout << "d3 " << d3 << endl;
//	*/
//	//cout << "d3 year day: " << d3.getYearDay() << endl;
//	//cout << "Total days: " << d3.getTotalDays() << endl;
//	
//	//cout << "Enter days to add: ";
//	//cin >> days;
//	//d3 += days;
//	//cout << d3 << endl;
//	//cout << "Enter days to add: ";
//	//cin >> days;
//	//cout << d3 + days << endl;
//
//	//cout << "Total days: " << d3.getTotalDays() << endl;
//	
//	//cout << "Enter days to subtract: ";
//	//cin >> days;
//	//d3 -= days;
//	//cout << d3 - days << endl;
//	
//	getchar();
//	
//	getchar();
//
//	return 0;
//}