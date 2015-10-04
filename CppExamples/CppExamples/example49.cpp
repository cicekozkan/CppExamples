// variables created with typedef do not change function signature
#include <iostream>
#include <cmath>

using namespace std;

typedef int Word;

void func(int);
void func(Word);  //function redeclaration
///typedef isimleri imza farkliligi yaratmaz


int main()
{

	return 0;
}