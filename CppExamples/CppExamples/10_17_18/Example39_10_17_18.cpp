// example to sort algorithm
#include <deque>
#include "date.h"
#include "cupa.h"
#include <iostream>
#include <functional>

using namespace std;

int main()
{
	deque<Date> x;
	randomize();

	fc(x, 10, &Date::random);

	sort(x.begin(), x.end(), greater<Date>());
	display(x);

	return 0;
}