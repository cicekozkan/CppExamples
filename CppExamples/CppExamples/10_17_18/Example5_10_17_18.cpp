// Getting ready for bind examples. Binds will replace lambdas. 
#include <vector>
#include <algorithm>
#include "cupa.h"
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

	auto y = count_if(ivec.begin(), ivec.end(), [val](int x) {return x > val; });

	cout << y << endl;

	return 0;
}