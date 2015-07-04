// an example to range based for loop. for(int x:a). a: container with integer types. that's why int x definition has been made
// if the container was made of with double typed values we would write for(double x:a). 
#include <iostream>

using namespace std;

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };

	//range based for loop
	for (int k = 0; k < 5; ++k)
		cout << a[k] << " ";

	cout << "\n";

	for (int x : a)
		x = 0;	// this does not set the values of a elements. to set them use references

	for (int x : a)
		cout << x << " ";
	cout << "\n";

	cin >> a[0];
	return 0;
}