// an example to stack that holds Date objects
#include "date.h"
#include <iostream>
#include <stack>

using namespace std;

typedef stack<Date> Adt;

int main()
{
	Adt c;
	for (int k = 0; k < 5; ++k) {
		Date x = Date::random();
		cout << x << endl;
		c.push(x);
	}

	while (!c.empty()) {
		cout << "oge sayisi : " << c.size() << endl;
		cout << c.top() << endl;
		c.pop();
		getchar();
	}

	return 0;
}