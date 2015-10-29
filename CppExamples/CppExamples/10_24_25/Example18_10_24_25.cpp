// an example to use a ostringstream class object like sprintf function in C
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>

using namespace std;


string getLocalTimeStr()
{
	time_t timer = time(nullptr);
	auto p = localtime(&timer);
	ostringstream oss;
	oss << setfill('0');

	oss << setw(2) << p->tm_mday << "_" << setw(2) << p->tm_mon + 1 << "_"
		<< p->tm_year + 1900 << "_" <<
		setw(2) << p->tm_hour << '_' << setw(2) << p->tm_min << '_' <<
		setw(2) << p->tm_sec;
	return oss.str();
}


int main()
{
	cout << getLocalTimeStr() << endl;

	return 0;
}