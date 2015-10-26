#pragma once
#include <iosfwd>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>

class BadDate {
	std::string reason;
public:
	BadDate(std::string r): reason(r) { }	 
	std::string getReason(void){ return reason; }
};

class Date {
	mutable int m_total_days;	///< Total days elapsed since 1, 1, mscYearBase	
	int m_day, m_mon, m_year;	///< day, month and year members
	static int monthDays[12];	///< this array holds how many days each month has 
	static const int mscYearBase = 1700;	///< base year for this implementation
	static bool isleap(int y){	
		return (y % 4 == 0);
	}
	/*!
	\fn static Date totalDaysToDate(int totalDays)
	\brief Calculate the date after totalDays from base year
	\param totalDays Total days
	\return Date object... base year + totalDays
	*/
	static Date totalDaysToDate(int totalDays)
	{
		Date temp(1, 1, mscYearBase);

		temp.m_total_days = totalDays;
		temp.m_day = totalDays;

		// is it leap? check this year
		if (isleap(temp.m_year))
			monthDays[1] = 29;
		else
			monthDays[1] = 28;

		while (temp.m_day > monthDays[temp.m_mon - 1]){
			// we will move one month. subtract this month's days
			temp.m_day -= monthDays[temp.m_mon - 1];
			// go to next month
			temp.m_mon++;
			// end of the year? 
			if (temp.m_mon > 12){
				temp.m_mon -= 12;
				temp.m_year++;
				// is it leap? check new year
				if (isleap(temp.m_year))
					monthDays[1] = 29;
				else
					monthDays[1] = 28;
			}
		}// end while

		return temp;
	}
public:
	Date(int d = -1, int m = -1, int y = -1){
		if (d == -1 || m == -1 || y == -1){
			// get current date
			time_t t = time(0);
			struct tm now;
			localtime_s(&now, &t);
			
			if (d == -1){
				m_day = now.tm_mday;
			}
			else
			{
				m_day = d;
			}
			if (m == -1)	{
				m_mon = now.tm_mon + 1;
			}
			else
			{
				m_mon = m;
			}
			if (y == -1)	{
				m_year = now.tm_year + 1900;
			}
			else
			{
				m_year = y;
			}
		}
		else{
			if (y < mscYearBase){
				BadDate b("Year is smaller than base year");
				throw b;
			}
			if (m > 12){
				BadDate b("Month is greater than 12");
				throw b;
			}
			if (d > 31){
				BadDate b("Day is greater than 31");
				throw b;
			}
			if (m == 2 && isleap(y) && d > 29){
				BadDate b("Day is greater than 29 in a leap year");
				throw b;
			}
			if (m == 2 && !isleap(y) && d > 28){
				BadDate b("Day is greater than 28 in a non-leap year");
				throw b;
			}
			if (d > monthDays[m - 1]){
				BadDate b("Day is greater than that month's max day");
				throw b;
			}
			m_day = d;
			m_mon = m;
			m_year = y;
		}
	}
	//////
	int getYear()const{ return m_year; }
	int getMonth()const{ return m_mon; }
	int getMonthDay()const{ return m_day; }
	int getWeekDay()const;
	int getTotalDays()const
	{
		m_total_days = (m_year - mscYearBase) * 365 + (int)ceil((m_year - mscYearBase) / 4.0) + getYearDay();
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
	Date operator-(int ndays)const{
		return Date(m_day) -= ndays;
	}
	Date operator+(int ndays)const{
		return Date(m_day) += ndays;
	}
	friend int operator-(const Date &, const Date &);
	Date &operator++(){
		*this += 1;	// += operator overloading takes care of moving forward in case adding one day will result moving to the next month
		return *this;
	}
	Date operator++(int){ //sonek
		Date temp(*this);
		*this += 1;	// += operator overloading takes care of moving forward in case adding one day will result moving to the next month
		return temp;
	}
	Date &operator--(){
		*this -= 1;	// -= operator overloading takes care of moving forward in case adding one day will result moving to the next month
		return *this;
	}
	Date operator--(int){
		Date temp(*this);
		*this -= 1;	// -= operator overloading takes care of moving forward in case adding one day will result moving to the next month
		return temp;
	}
	Date &operator+=(int ndays){		
		*this = totalDaysToDate(getTotalDays() + ndays);
		return *this;
	}
	Date &operator-=(int ndays){
		*this = totalDaysToDate(getTotalDays() - ndays);
		return *this;
	}
	Date &setMonthDay(int mday){ m_day = mday; return *this; }
	Date &setMonth(int mon){ m_mon = mon; return *this; }
	Date &setYear(int year){ m_year = year; return *this; }
	/*!
	\fn static Date random(void)
	\brief Supposed to return a random Date object. However, it returns same object every time it is called. Does srand function not work?
	\return Random Date object.
	*/
	static Date random(void){
		//srand(static_cast<unsigned>(std::time(nullptr)));
		int m{ 1 + std::rand() % 12 };
		int y{ mscYearBase + std::rand() };
		if (isleap(y)){
			monthDays[1] = 29;
		}
		int d{ 1 + std::rand() % monthDays[m - 1] };
		return Date(d, m, y);
	}
	friend std::ostream &operator<<(std::ostream &, const Date &);
	friend std::istream &operator>>(std::istream &, Date &);
};

