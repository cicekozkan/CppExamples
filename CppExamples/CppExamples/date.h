#pragma once
#include <iosfwd>

class Date {
	int m_total_days;	// ? 
	int m_day, m_mon, m_year;

	static const int mscYearBase = 1700;
	static bool isleap(int y);	// modulo 4 years
public:
	Date(int d = 0, int m = 0, int y = 0);
	//////
	int getYear()const{ return m_year; }
	int getMonth()const{ return m_mon; };
	int getMonthDay()const;
	int getWeekDay()const;
	int getYearDay()const;


	friend bool operator<(const Date &r1, const Date &r2);
	friend bool operator<=(const Date &r1, const Date &r2);
	friend bool operator>(const Date &r1, const Date &r2);
	friend bool operator>=(const Date &r1, const Date &r2);
	friend bool operator==(const Date &r1, const Date &r2);
	friend bool operator!=(const Date &r1, const Date &r2);
	Date operator-(int ndays)const;
	Date operator+(int ndays)const;
	friend int operator-(const Date &, const Date &);
	Date &operator++();
	Date operator++(int); //sonek
	Date &operator--();
	Date operator--(int); //sonek
	Date &operator+=(int ndays);
	Date &operator-=(int ndays);
	Date &setMonthDay(int mday);
	Date &setMonth(int mon);
	Date &setYear(int year);
	static Date random();
	friend std::ostream &operator<<(std::ostream &, const Date &);
	friend std::istream &operator>>(std::istream &, Date &);
};



class BadDate {

};