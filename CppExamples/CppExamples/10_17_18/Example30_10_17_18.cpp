// example to queue. FIFO
#include "date.h"
#include <iostream>
#include <queue>

using namespace std;

typedef queue<Date> Adt;

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
		cout << "kuyruk basi : " << c.front() << endl;
		cout << "kuyruk sonu : " << c.back() << endl;

		c.pop();
		getchar();
	}

	return 0;
}