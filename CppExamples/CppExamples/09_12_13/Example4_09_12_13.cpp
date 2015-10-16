// A template's template parameter can be a template
#include <string>
#include <iostream>

using namespace std;

template <typename T, typename U>
class Sclass {
};

template <typename T, typename U>
class Tclass {
};

template<typename T, template<typename, typename> class C>
struct Myclass {
	C<T, T> mx;
	/**
	* Default consructor
	*/
	Myclass()
	{
		cout << typeid(mx).name() << endl;
	}
};


int main()
{
	Myclass<int, Tclass> m1;
	Myclass<double, Sclass> m2;

	return 0;
}