// example to default arguments. a default argument can be a global variable, a nullptr, a string and etc.
#include <iostream>
#include <cstring>

using namespace std;

struct Data  {
	int a, b, c;
};

int x = 10;

void func(int &r = x);
void foo(Data *ptr = nullptr);
void f(const char *p = "error message");

int main()
{


	return 0;
}