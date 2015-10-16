// Another template specialization; same type specialization
#include <string>
#include <iostream>

using namespace std;

template<typename T, typename U>
struct Myclass {
	/**
	* Default constructor
	*/
	Myclass()
	{
		cout << "Master template" << endl;
		cout << "Type T is " << typeid(T).name() << endl;
		cout << "Type U is " << typeid(U).name() << endl;
	}
};

template<typename T>
struct Myclass<T, T>
{
	Myclass() {
		cout << "Secondary template" << endl;
	}
};


int main()
{
	Myclass<int, double> m1;
	Myclass<double, double> m2;

	return 0;
}