// by default streams do not throw exceptions in case its state is not good
// call exceptions member functions with desired flags if you want streams
// to throw exceptions
#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "bir tamsayi girin : ";
	cin.exceptions(ios::eofbit | ios::badbit | ios::failbit);

	try {
		cin >> x;
	}
	catch (exception &r) {
		cout << "hata yakalandi .... : " << r.what() << endl;
	}

	return 0;
}