// default arguments do not change function signature. in this example function is redeclared in client.cpp file
#include <iostream>
#include <cstring>

using namespace std;


///sina.h
void func(int, int, int);

//client.cpp

void func(int, int, int = -1);

int main()
{
	func(10, 20);

	return 0;
}