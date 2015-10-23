// static member functions are like global functions. You can define 
// a pointer to them like you do to global functions
#include <iostream>

using namespace std;

class Myclass {
public:
	static int func(int val)
	{
		return val * val + 1;
	}

};

int main()
{
	int(*fp)(int) = &Myclass::func;

	cout << fp(10) << endl;

	return 0;
}