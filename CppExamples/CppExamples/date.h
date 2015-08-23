#pragma once
#include <iosfwd>
#include <ctime>

class Date {
	int m_total_days;	
	int m_day, m_mon, m_year;
	static int monthDays[12]; 
	static const int mscYearBase = 1700;
	static bool isleap(int y){// modulo 4 years
		return (y % 4 == 0);
	}
	/*!
		\fn static Date totalDaysToDate(int totalDays)
		\brief Calculate the date after totalDays from base year
		\param totalDays Total days
		\return Date& Date object... base year + totalDays
	*/
	static Date totalDaysToDate(int totalDays)
	{
		Date temp(1, 1, mscYearBase);

		temp.m_total_days = totalDays;
		temp.m_day = totalDays;

		while (temp.m_day > monthDays[temp.m_mon - 1]){
			// we will move one month. subtract this month's days
			temp.m_day -= monthDays[temp.m_mon - 1];
			// go to next month
			temp.m_mon++;
			// end of the year?
			if (temp.m_mon > 12){
				temp.m_mon -= 12;
				temp.m_year++;
				// is it leap?
				if (isleap(temp.m_year))
					monthDays[1] = 29;
				else
					monthDays[1] = 28;
			}
		}// end while

		return temp;
	}
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
		m_total_days = (m_year - mscYearBase) * 365 + (m_year - mscYearBase) / 4 + getYearDay();
	}
	//////
	int getYear()const{ return m_year; }
	int getMonth()const{ return m_mon; }
	int getMonthDay()const{ return m_day; }
	int getWeekDay()const;
	int getTotalDays()const
	{
		//m_total_days = (m_year - mscYearBase) * 365 + (m_year - mscYearBase) / 4 + getYearDay();
		return m_total_days;
	}
	int getYearDay()const
	{
		int yearday = 0;

		if (isleap(m_year))
			monthDays[1] = 29;
		else
			monthDays[1] = 28;

		for (int i = 0; i < m_mon -1 ; i++){
			yearday += monthDays[i];
		}
		yearday += m_day;
		return yearday;
	}
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
	Date &operator+=(int ndays){		
		*this = totalDaysToDate(m_total_days + ndays);
		//m_total_days += ndays;
		/*
		m_day += ndays;
		while (m_day > monthDays[m_mon - 1]){
			m_day -= monthDays[m_mon - 1];
			++m_mon;
			if (m_mon > 12) {
				++m_year;
				m_mon -= 12;
			}
		}
		*/
		return *this;
	}
	Date &operator-=(int ndays){
		m_day -= ndays;
		while (m_day <= 0){
			--m_mon;
			if (m_mon <= 0) {
				--m_year;
				m_mon += 12;
			}
			if (m_year < mscYearBase)	{
				m_day = 1;
				m_mon = 1;
				m_year = mscYearBase;
				return *this;
			}
			m_day += monthDays[m_mon - 1];			
		}
		return *this;
	}
	Date &setMonthDay(int mday){ m_day = mday; return *this; }
	Date &setMonth(int mon){ m_mon = mon; return *this; }
	Date &setYear(int year){ m_year = year; return *this; }
	static Date random();
	friend std::ostream &operator<<(std::ostream &, const Date &);
	friend std::istream &operator>>(std::istream &, Date &);
};


class BadDate {

};