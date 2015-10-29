// example to setfill and setw. setfill sets the fill character of the stream
// setw sets the width of the stream. It never causes a truncation
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x = 10;

	cout << left << setfill('+') << setw(12) << x << "ali" << endl;

	return 0;
}