// you cannot get a non-constant reference to a constant variable. the opposite is legal. you can get a constant reference
// to a non-constant variable 
#include <iostream>

using namespace std;

int main()
{
	const int x = 45;
	//int &r = x;   //gecersiz
	const int &r = x;  //gecerli


	return 0;
}