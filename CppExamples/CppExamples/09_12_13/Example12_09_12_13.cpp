// A template class can have a template member function with a different template parameter type
#include <string>
#include <iostream>

using namespace std;

template<class T>
class Myclass {
public:
	Myclass() {
		cout << "Constructor. The class template parameter type: " << typeid(T).name() << endl;
	}
	template<class U>
	void func(U x) {
		cout << "Member function. The member function template parameter type: " << typeid(U).name() << endl;
	}
};

int main()
{
	Myclass<int> m;
	string s{ "necxati" };

	m.func(s);

	return 0;
}