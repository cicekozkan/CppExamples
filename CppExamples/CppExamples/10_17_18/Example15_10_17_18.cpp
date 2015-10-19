// First example to reference_wrapper
// std::reference_wrapper is a class template that wraps a reference in a copyable, 
// assignable object. It is frequently used as a mechanism to store references inside standard containers(like std::vector) 
// which cannot normally hold references.
// Specifically, std::reference_wrapper is a CopyConstructible and CopyAssignable wrapper around a reference to object or reference
// to function of type T.Instances of std::reference_wrapper are objects(they can be copied or stored in containers) but they are 
// implicitly convertible to T&, so that they can be used as arguments with the functions that take the underlying type by reference.
// Helper functions std::ref and std::cref are often used to generate std::reference_wrapper objects.
// std::reference_wrapper is also used to pass objects to std::bind or to the constructor of std::thread by reference.
#include <iostream>
#include <list>
#include <functional>
#include <vector>

using namespace std;

int main()
{
	int x = 10;
	int y = 20;
	int z = 30;
	int k = 40;

	vector<reference_wrapper<int>> svec{ x, y, z, k };
	list<reference_wrapper<int>> slist{ x, y, z, k };

	for (auto &r : svec)
		r *= 2;

	for (auto &r : slist)
		r += 12;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "k = " << k << endl;

	return 0;
}