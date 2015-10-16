// Example to C++11 template alias
// template < template-parameter-list >
// using identifier attr(optional) = type - id;
// An alias template is a template which, when specialized, is equivalent to the result of substituting the template 
// arguments of the alias template for the template parameters in the type - id

#include <string>
#include <iostream>

using namespace std;

template <typename KeyType, typename ValueType>
class Map {
public:
	Map() {
		cout << "Key type: " << typeid(KeyType).name() << endl;
		cout << "Value type: " << typeid(ValueType).name() << endl;
	}
};

template<typename KeyType>
using Smap = Map<KeyType, int>;

int main()
{
	Map<string, int> mymap;
	Smap<double> s;

	return 0;
}