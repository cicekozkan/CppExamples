// std::getline reads characters from an input stream and places them into a string.
// istringstream can be used to extract some values from string just like you do it from cin
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	cout << "bir yazi girin : ";
	string s;

	getline(cin, s);

	istringstream iss(s);

	double d;
	string name;
	int ival;

	iss >> d >> name >> ival;

	cout << "isim : " << name << endl;
	cout << "dval : " << d << endl;
	cout << "ival : " << ival << endl;

	return 0;
}