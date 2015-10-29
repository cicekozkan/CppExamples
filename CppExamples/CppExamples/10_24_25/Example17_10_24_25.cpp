// str member function can be used empty the underlying string object in ostringstream class
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
	ostringstream oss;

	for (int k = 1; k <= 12; k++) {
		oss << setw(2) << setfill('0') << k << ".jpg";
		cout << oss.str() << endl;
		getchar();
		oss.str("");
	}

	return 0;
}