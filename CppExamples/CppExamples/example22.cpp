// a reference is actually a const pointer to a variable -> int *const ptr = &x
#include <iostream>

using namespace std;

struct Data {
	int a, b, c;
};

typedef struct Data T;

void f1(T *ptr);
void f2(const T *ptr);
void f3(T &r);
void f4(const T &r);

int main()
{
	int x = 10;
	int &r = x;
	int *const ptr = &x;   //r----> (*ptr)

	return 0;
}