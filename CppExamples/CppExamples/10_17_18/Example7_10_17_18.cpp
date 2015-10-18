// A user defined function is parsed to find_if algorithm as a predicate by binding
// 2 of its 3 parameters
#include <vector>
#include "cupa.h"
#include <iostream>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool isinrange(int a, int b, int c)
{
	return a >= b && a <= c;
}

int main()
{
	vector<int> ivec;
	randomize();

	fc(ivec, 100, rand);
	display(ivec);
	int val;

	cout << "aralik degerleri : ";
	int low, high;

	cin >> low >> high;

	auto iter = find_if(ivec.begin(), ivec.end(), bind(isinrange, _1, low, high));
	if (iter == ivec.end())
		cout << "bulunamadi" << endl;
	else
		cout << "bulundu : " << *iter << endl;

	return 0;
}