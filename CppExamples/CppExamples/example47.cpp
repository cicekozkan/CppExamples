// a default argument can be a function return value
#include <iostream>
#include <cstring>

using namespace std;

int func(int x = 10);
int foo(int a, int b = func());


int main()
{
	
	return 0;
}