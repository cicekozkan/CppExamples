// example to ios::left whose mask is ios::adjustfield
// and ios::width: Manages the minimum number of characters to generate on certain output operations and the maximum number of characters to generate on certain output operations.
//	1) Returns the current field width.
//	2) Sets the field width to the given one.
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	string s = "mustafa";

	cout.setf(ios::left, ios::adjustfield);
	cout.width(10);
	cout << x;

	cout << s;

	cout << endl;


	return 0;
}