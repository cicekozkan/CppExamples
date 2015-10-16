// A template alias has been given to standard pair structure
// The first template parameter type is selected as string
#include <string>
#include <iostream>

using namespace std;

class Date {};

template<typename ValueType>
using spair = std::pair<std::string, ValueType>;

int main()
{
	spair<double> p1("Key", 1.5);
	
	cout << "(" << p1.first << "," << p1.second << ")" << endl;

	return 0;
}