// A class which is not a template can have template member functions
#include <string>

using namespace std;


class Myclass {
public:
	template<class T>
	void func(T x) {}
};

int main()
{
	Myclass m;

	m.func(10);
	m.func(2.3);
	string s;
	m.func(s);
	m.func("Ozkan");

	return 0;
}