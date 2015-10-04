// C++11 ile gelen R value references. int &&r
#include <iostream>

using namespace std;

int func();

int main()
{
	int &&r = func();  //C++11 ile gelen R value references

	return 0;
}