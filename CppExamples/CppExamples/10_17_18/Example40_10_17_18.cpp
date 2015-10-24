// a lambda passed to sort algorithm
#include <deque>
#include <algorithm>
#include "date.h"
#include "cupa.h"
#include <iostream>

using namespace std;

int main()
{
	deque<Date> x;
	randomize();

	fc(x, 10, &Date::random);

	sort(x.begin(), x.end(), [](const Date &d1, const Date &d2) {return d1.getMonthDay() < d2.getMonthDay(); });

	display(x);

	return 0;
}