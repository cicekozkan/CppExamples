// unary_function is a base class for creating function objects with one argument.
// unary_function does not define operator(); it is expected that derived classes will define this. 
// unary_function provides only two types - argument_type and result_type - defined by the template parameters.
// Some standard library function object adaptors, such as std::not1, require the function objects they adapt to 
// have certain types defined; std::not1 requires the function object being adapted to have a type named argument_type.
// Deriving function objects that take one argument from unary_function is an easy way to make them compatible with those adaptors.
#include <string>
#include <functional>

using namespace std;

struct Pred : public std::unary_function<string, bool> {
	bool operator()(const string &r1)
	{
		return r1.length() == 5;
	}
};

int main()
{

	return 0;
}