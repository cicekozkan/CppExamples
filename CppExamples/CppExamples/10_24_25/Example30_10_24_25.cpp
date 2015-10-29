// std::istream::get extracts a single character from the stream if it 
// takes only one char argument
// int get();
// istream& get(char& c);
// std::istream::gcount turns the number of characters extracted by the 
// last unformatted input operation performed on the object.

#include <iostream>

using namespace std;

int main()
{
	char c;

	cout << "bir giris yapin : ";
	cin.get(c);
	cout << cin.gcount() << endl;

	return 0;
}