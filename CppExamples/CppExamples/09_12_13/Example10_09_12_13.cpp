// A class that has a member function whose parameter type is int can only be called with integers
// Next example will demonstrate how to define a template member function 
using namespace std;

class Myclass {
public:
	void func(int x) {}
};

int main()
{
	Myclass m;

	m.func(10);
	m.func(1.2);		// double to integer conversion
	m.func("Ozkan");	// you cannot call. incompatible type

	return 0;
}