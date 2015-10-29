// format input stream to get 5 characters long strings 
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string s;

	cin >> setw(5) >> s;
	cout << s << endl;

	return 0;
}