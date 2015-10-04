// decltype is used to declare a variable with the same type of its argument. the run-statements inside decltype are not called
#include <iostream>
#include <cstring>

using namespace std;

int func();

int main()
{
	decltype(func()) x;  //func islevi cagrilmaz

	return 0;
}