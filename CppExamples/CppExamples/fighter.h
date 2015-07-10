#pragma once
#include <string>
#include <list>



class Fighter {
	int m_age;
	std::string m_name;
	static int ms_age_limit;
	static std::list<Fighter *> ms_list;
public:
	~Fighter();
	Fighter(int age, const std::string &rname) : m_age(age), m_name(rname)
	{
		ms_list.push_back(this);
	}
	Fighter(const Fighter &r) : m_age(r.m_age), m_name(r.m_name)
	{
		ms_list.push_back(this);
	}
	int getAge()const
	{
		return m_age;
	}
	int setAge(int age)
	{
		m_age = age;
	}
	std::string getName()const
	{
		return m_name;
	}
	void getHelp();
};