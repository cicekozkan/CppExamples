#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 40;
	int &r = x;

	cout << x << endl;
	r = y;	// assigning a new variable to a reference after it is defined doesn't mean that the reference will be referenced to that new variable
			// it just updates the value of the variable that it is referenced
	cout << x << endl;
	cout << r << endl;
	cin >> x;	// to hold screen
	return 0;
}