// example to ios::flags() method. It retrieves the state of flags. It can be ORed or ANDed with 
// a specific flag to set it or to find its state
#include <iostream>

using namespace std;

int main()
{

	if (cout.flags() & ios::fixed)
		cout << "fixed bayragi set edilmis durumda" << endl;
	else
		cout << "fixed bayragi set edilmemis durumda" << endl;

	if (cout.flags() & ios::scientific)
		cout << "scientific bayragi set edilmis durumda" << endl;
	else
		cout << "scientific bayragi set edilmemis durumda" << endl;

	return 0;
}