// example to ostream_iterator. Here we created our own Ostream_iterator<> class template
// that's exactly same of ostream_iterator<> class template. This iterator writes successive 
// objects of type T into the std::basic_ostream object for which it was constructed, using operator<<. 
 
#include <string>
#include <iostream>

using namespace std;

template<typename T>
class Ostream_iterator {
	std::ostream &r;
	const char *mp;
public:
	Ostream_iterator(std::ostream &os, const char *p = "") : r(os), mp(p) {}
	Ostream_iterator &operator*() { return *this; }
	Ostream_iterator &operator++() { return *this; }
	Ostream_iterator &operator++(int) { return *this; }
	Ostream_iterator &operator=(const T &val)
	{
		r << val << mp;
		return *this;
	}
};


int main()
{
	Ostream_iterator<string> myIt(cout, "\n");

	myIt = "Ozkan";

	return 0;
}