// use const arguments in get and display functions and use non-const arguments in set functions
#include <iostream>

using namespace std;

struct Data {
	int a, b, c;
};

Data *func(Data *ptr)
{
	ptr->a++;
	ptr->b++;
	ptr->c++;

	return ptr;
}

void display(const Data *ptr)
{
	cout << ptr->a << endl;
	cout << ptr->b << endl;
	cout << ptr->c << endl;
	cout << "************************************************" << endl;
}

int main()
{
	Data mydata = { 10, 20, 30 };

	display(&mydata);

	display(func(&mydata));
	cin >> mydata.a;

	return 0;
}