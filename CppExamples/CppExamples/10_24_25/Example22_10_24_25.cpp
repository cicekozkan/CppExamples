// manipulators can be used to format input streams too
#include <iostream>

using namespace std;

int main()
{
	cout << "bir tamsayi girin : ";
	int x;

	cin >> hex >> x;
	cout << "girilen tamsayi : " << x << endl;

	return 0;
}