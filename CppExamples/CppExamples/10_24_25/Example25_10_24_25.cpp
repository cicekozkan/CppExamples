// std::basic_ios::rdstate returns the current stream error state. 
// static constant variables of type iostate 
// goodbit 	no error
// badbit 	irrecoverable stream error
// failbit 	input / output operation failed(formatting or extraction error)
// eofbit 	associated input sequence has reached end - of - file

#include <iostream>

using namespace std;

int main()
{
	cout << "bir sayi girin : ";

	int x;

	cin >> x;

	if (cin.rdstate() & ios::failbit)
		cout << "failbit set edilmis durumda" << endl;

	if (cin.rdstate() & ios::eofbit)
		cout << "eofbit set edilmis durumda" << endl;

	if (cin.rdstate() & ios::badbit)
		cout << "badbit set edilmis durumda" << endl;

	if (cin.rdstate() == 0)
		cout << "hic bir bit set edilmemis durumda " << endl;

	return 0;
}