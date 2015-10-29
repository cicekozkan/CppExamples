// istringstream class's operator bool() returns the compliment of state false
// while (iss >> word) breaks the loop when iss is empty
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	cout << "bir yazi girin : ";
	string s;

	getline(cin, s);

	istringstream iss(s);

	string word;

	while (iss >> word)
		cout << word << endl;

	return 0;
}