// Example to unordered sets. Unordered sets are containers that store unique elements 
// in no particular order, and which allow for fast retrieval of individual elements based on their value. 
#include <string>
#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	unordered_set<string> names{ "ali", "hakan", "turgut", "suleyman", "macide", "taylan", "recep", "devlet", "dogu" };

	for (;;) {
		string s;
		cout << "isim girin ";
		cin >> s;
		if (names.count(s))
			cout << "evet" << endl;
		else
			cout << "hayir" << endl;
	}

	return 0;
}