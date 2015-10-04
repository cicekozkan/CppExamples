// example30 repeated with reference arguments
#include <iostream>

using namespace std;

struct Data {
	int a, b, c;
};

Data &func(Data &r)
{
	r.a++;
	r.b++;
	r.c++;

	return r;
}

void display(const Data &r)
{
	cout << r.a << endl;
	cout << r.b << endl;
	cout << r.c << endl;
	cout << "************************************************" << endl;
}

int main()
{
	Data mydata = { 10, 20, 30 };

	display(mydata);

	display(func(mydata));
	cin >> mydata.a;
	return 0;
}