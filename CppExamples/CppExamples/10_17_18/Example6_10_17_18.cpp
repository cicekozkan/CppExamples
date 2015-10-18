// greater<> template binded to greater<int>(_1, val)
// bind(greater<int>(), _1, val)
#include <vector>
#include "cupa.h"
#include <iostream>
#include <functional>

using namespace std;
using namespace std::placeholders;

int main()
{
	vector<int> ivec;
	randomize();

	fc(ivec, 100, rand);
	display(ivec);
	int val;

	cout << "kactan buyuk olanlar sayilsin : ";
	cin >> val;

	auto y = count_if(ivec.begin(), ivec.end(), bind(greater<int>(), _1, val));

	cout << y << endl;

	return 0;
}