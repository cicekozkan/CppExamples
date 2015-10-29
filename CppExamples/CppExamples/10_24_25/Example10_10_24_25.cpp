// enable scientific flag with scientific manipulator
#include <iostream>

using namespace std;

int main()
{
	cout << scientific << endl;

	if (cout.flags() & ios::fixed)
		cout << "fixed bayragi set edilmis durumda" << endl;
	else
		cout << "fixed bayragi set edilmemis durumda" << endl;

	if (cout.flags() & ios::scientific)
		cout << "scientific bayragi set edilmis durumda" << endl;
	else
		cout << "scientific bayragi set edilmemis durumda" << endl;

	double d = 2.0;
	cout << d << endl;

	return 0;
}