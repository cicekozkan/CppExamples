// introduction to references

#include <iostream>

using namespace std;

int main()
{
	double dval = 3.4;
	double &r = dval;	// you have to assign a variable to a reference when it is defined

	cout << dval << endl;
	r = 4.5;	// if you change the value of a reference you actually change the value of the variable that it is referred
	cout << dval << endl;

	return 0;
}