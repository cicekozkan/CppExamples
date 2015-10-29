// ostringstream class object holds the value stored in underlying raw string device object unless you empty it  
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
	}

	return 0;
}