// In this example template specialization is studied
#include <string>
#include <iostream>

using namespace std;

template<typename T, typename U>
T func(T x, U y)
{
	cout << "master template" << endl;
	return T();
}

template<>
int func(int x, double y)
{
	cout << "acik ozellestirme" << endl;
	return 1;
}

int main()
{
	func(3, 4.5);

	return 0;
}