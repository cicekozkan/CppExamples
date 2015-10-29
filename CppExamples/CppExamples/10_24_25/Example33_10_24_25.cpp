// std::basic_ostream::write 
// Behaves as an UnformattedOutputFunction. After constructing and checking the sentry object, 
// outputs the characters from successive locations in the character array whose first element 
// is pointed to by s.Characters are inserted into the output sequence until one of the following occurs :
// exactly count characters are inserted
// inserting into the output sequence fails(in which case setstate(badbit) is called)
// unlike the formatted output functions, this function does not set the failbit on failure. 
#include "cupa.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream ofs("sina.dat", ios::binary);

	if (ofs.fail()) {
		cout << "dosya olusturulamadi\n";
		return 1;
	}
	int ival = 2;
	int prime_cnt = 0;

	while (prime_cnt < 100000) {
		if (isprime(ival)) {
			ofs.write(reinterpret_cast<char *>(&ival), sizeof(ival));
			prime_cnt++;
		}
		ival++;
	}

	return 0;
}