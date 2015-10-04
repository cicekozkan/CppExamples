// example to default arguments
#include <iostream>
#include <cstring>

using namespace std;

void func(int, int, int = 10);
void foo(int x = 79, int y = 34, int z = 45);

int main()
{
	func(1, 2, 3);
	func(1, 4);
	foo();  //79, 34, 45
	foo(-1);  //-1, 34, 45
	foo(-1, -2);  //-1, -2, 45
	foo(-1, -2, -3);  //-1, -2, -3

	return 0;
}