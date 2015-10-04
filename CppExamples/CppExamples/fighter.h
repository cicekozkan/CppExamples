#pragma once
#include <string>
#include <list>

class Fighter {
	int m_age;
	std::string m_name;
	static int ms_age_limit;
	static std::list<Fighter *> ms_list;
public:
	~Fighter();	// destructor
	Fighter(int age, const std::string &rname) : m_age{ age }, m_name{ rname }	// constructor
	{
		ms_list.push_back(this);	// add every created fighter's address to the list 
	}
	Fighter(const Fighter &r) : m_age{ r.m_age }, m_name{ r.m_name }	// Copy constructor: public, inline, non-static 
	{																	// member function. It has to exist. Its argument
		ms_list.push_back(this);										// is constant class reference. It doesn't have a 
	}																	// return value
	int getAge()const	// will not change the object so it must be constant
	{
		return m_age;
	}
	int setAge(int age)	// will change the object
	{
		m_age = age;
	}
	std::string getName()const	// will not change the object so it must be constant
	{
		return m_name;
	}
	void getHelp();	// our fighter will call for help from near allies if they are older than ms_age_limit
};