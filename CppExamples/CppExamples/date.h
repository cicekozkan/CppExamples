#pragma once
#include <iosfwd>
#include <ctime>

class Date {
	int m_total_days;	// ? 
	int m_day, m_mon, m_year;

	static const int mscYearBase = 1700;
	static bool isleap(int y);	// modulo 4 years
public:
	Date(int d = 0, int m = 0, int y = 0){
		if (d == 0 || m == 0 || y == 0){
			// get current date
			time_t t = time(0);
			struct tm now;
			localtime_s(&now, &t);
			
			if (d == 0){
				m_day = now.tm_mday;
			}
			else
			{
				m_day = d;
			}
			if (m == 0)	{
				m_mon = now.tm_mon + 1;
			}
			else
			{
				m_mon = m;
			}
			if (y == 0)	{
				m_year = now.tm_year + 1900;
			}
			else
			{
				m_year = y;
			}
		}
		else{
			m_day = d;
			m_mon = m;
			m_year = y;
		}
	}
	//////
	int getYear()const{ return m_year; }
	int getMonth()const{ return m_mon; }
	int getMonthDay()const{ return m_day; }
	int getWeekDay()const;//?
	int getYearDay()const;//?

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