// this is the example that demonstrates the need for reference_wrapper<> class template
// there is a function whose parameter list is reference to integers and we want to bind
// a function to this function with our local variables. Since bind creates copies of its arguments
// and passes those copies to the target function; our target function did not achive its purpose
// (did not change our local variables)

#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

void func(int &r1, int &r2)
{
	r1 += 10;
	r2 -= 20;
}

int main()
{
	int x = 100;
	int y = 200;

	auto f = bind(func, x, y);

	f();

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

	return 0;
}