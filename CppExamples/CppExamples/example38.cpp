// range based for loop with a reference to change the values of the container elements
#include <iostream>

using namespace std;


int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };

	//range based for loop
	for (int k = 0; k < 5; ++k)
		cout << a[k] << " ";

	cout << "\n";

	for (int &x : a)
		x = 0;

	for (int x : a)
		cout << x << " ";
	cout << "\n";
	cin >> a[0];

	return 0;
}