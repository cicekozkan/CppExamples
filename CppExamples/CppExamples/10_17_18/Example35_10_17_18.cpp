// Use ->* when calling member functions via member functions pointers to object pointers
#include <iostream>

using namespace std;

class Myclass {
public:
	int func(int val)
	{
		return val * val + 1;
	}

};

int main()
{
	auto fx = &Myclass::func;
	Myclass *p = new Myclass;

	cout << (p->*fx)(20) << endl;

	return 0;
}