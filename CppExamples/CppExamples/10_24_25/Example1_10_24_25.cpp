// setf member function of iostream is used to set flags of fmtflags type
// in this example boolalpha flag of cout class object has been set with 
// setf member function
#include <iostream>

using namespace std;

int main()
{
	cout << (19 > 5) << endl;
	cout.setf(ios_base::boolalpha);
	cout << (19 > 5) << endl;

	return 0;
}