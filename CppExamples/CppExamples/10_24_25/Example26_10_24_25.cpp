// when you call ostream or istream class object in a if or while 
// its operator bool() function returns the compliment of ios::badbit or
// simply it returns ios::goodbit
#include <iostream>

using namespace std;

int main()
{
	cout << "bir tamsayi giriniz:" << endl;
	int ival;

	cin >> ival;

	if (cin)
		cout << "input stream iyi durumda" << endl;
	else
		cout << "input stream kotu durumda" << endl;

	return 0;
}