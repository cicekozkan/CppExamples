// algoritms repeat. sort algorithm
#include <string>
#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

int main()
{
	string s{ "bugungunlerdenpazar" };
	sort(s.begin(), s.end(), greater<char>());
	cout << s << endl;

	return 0;
}