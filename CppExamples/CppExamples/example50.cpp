// pointer ve referans olmayan parametrelerin constlugu imza farkliligi yaratmaz
#include <iostream>
#include <cmath>

using namespace std;

void func(int);
void func(const int);
//gecerli - yeniden bildirim - isleve yuklemesi degil


int main()
{

	return 0;
}