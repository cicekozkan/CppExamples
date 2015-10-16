// Example to using keyword. A template class can be made equal to another template.
// The other template must explicitly say that it is a template
#include <string>

using namespace std;

template <typename T>
class Vector {
};

template<typename T>
using Vec = Vector<T>;

int main()
{
	Vector<int> vec1;
	Vec<int> vec2;

	return 0;
}
