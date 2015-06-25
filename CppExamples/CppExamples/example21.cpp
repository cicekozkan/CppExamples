// functions with pointers, const pointers, references, const references arguments
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

	return 0;
}