// you can call cin>>x in an if statement to check its state
#include <iostream>

using namespace std;

int main()
{

	int x;

	cout << "bir sayi giriniz : ";

	if (!(cin >> x))
		cout << "olmadi be dogru gir....." << endl;
	
	return 0;
}