// std::basic_ostream::put
// basic_ostream& put( char_type ch );
// Behaves as an UnformattedOutputFunction. After constructing and checking the sentry object, writes the character ch to the output stream.
// If the output fails for any reason, sets badbit.

#include <iostream>

using namespace std;

int main()
{
	char ch = 65;

	cout << ch << endl;
	cout.put(ch);

	return 0;
}