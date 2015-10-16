// If you specialize two templates with constant arguments 
// with different constant variables they become different classes
#include <string>

using namespace std;

template<int size>
class Tclass {
};

int main()
{
	Tclass<10> t1;
	Tclass<20> t2;
	///
	t1 = t2;   //gecersiz

	return 0;
}