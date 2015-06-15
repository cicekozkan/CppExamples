// you can get a reference to any type (an example with structure)
#include <iostream>

using namespace std;

struct Data {
	int x, y, z;
};

int main()
{
	Data mydata = {1, 2, 3};
	Data &r = mydata;

	r.y++;

	cout << "mydata.y = " << mydata.y << endl;

	cin >> r.y;
	return 0;
}