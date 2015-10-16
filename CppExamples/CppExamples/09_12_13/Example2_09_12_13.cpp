// Another example to template specialization. T& specialization type T is T not T&

#include <string>
#include <iostream>

using namespace std;

template<typename T>
struct Myclass {
	/**
	* Default constructor
	*/
	Myclass()	
	{
		cout << "master template" << endl;
		cout << "type T is " << typeid(T).name() << endl;
	}
};


template<typename T>
struct Myclass<T *> {
	/**
	* Default constructor
	*/
	Myclass()
	{
		cout << "Specialized template. T*" << endl;
		cout << "type T is " << typeid(T).name() << endl;
	}
};

//template<typename T>
//struct Myclass<T &> {
//	/**
//	* Default constructor
//	*/
//	Myclass()
//	{
//		cout << "Specialized template. T&" << endl;
//		cout << "type T is " << typeid(T).name() << endl;
//	}
//};


int main()
{
	Myclass<int> m1;
	cout << "**************************************************" << endl;
	cout << "Myclass template will be instantiated with double * and the type will be double because we have a special T* overload" << endl;
	Myclass<double *> m2;
	cout << "**************************************************" << endl;
	cout << "Now let's instantiate the template with a reference" << endl;
	Myclass<int &> m3;

	return 0;
}