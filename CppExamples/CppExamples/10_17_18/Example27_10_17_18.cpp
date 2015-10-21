// unary_functions and binary_functions base classes defines two types 
// for the derived classes: artgument_type and result_type
// this example prints the type names of these types of derived class
#include <iostream>
#include <functional>

using namespace std;

struct Myfunc : public std::binary_function<int, long, double> {
	double operator()(int x, long y)
	{
		return x + y;
	}
};

int main()
{
	cout << typeid (Myfunc::first_argument_type).name() << endl;
	cout << typeid (Myfunc::second_argument_type).name() << endl;
	cout << typeid (Myfunc::result_type).name() << endl;

	return 0;
}