// introduction to uniform initializer. uniform initializer does not allow narrowing conversion
#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	double x = 1.03;
	int y{ x };  //gecersiz (narrowing conversion)
	
	return 0;
}