// A template with 2 template parameters specialized as a template with one template parameter
// Its second parameter is hard-coded as int
#include <string>
#include <iostream>
using namespace std;

template <typename T, typename U>
class Data {
	/**
	* Default constructor
	*/
public:
	Data() {
		cout << "Type T: " << typeid(T).name() << endl;
		cout << "Type U: " << typeid(U).name() << endl;
	}
};

template<typename T>
using IData = Data<T, int>;

int main()
{
	IData<double> x;

	return 0;
}