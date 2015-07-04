// you can use references to access the variables of a struct
#include <iostream>

using namespace std;


struct Data {
	int a, b, c;
};

int main()
{
	Data mydata;
	/////
	Data &r = mydata;

	r.a = 45;

	return 0;
}
