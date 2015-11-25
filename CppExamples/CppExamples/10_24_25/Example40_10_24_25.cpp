// read a file content with istream itearators from end to beginning
#include <iterator>
#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("orhan.txt");

	if (!ifs) {
		cout << "acilamadi" << endl;
		return 1;
	}
	istream_iterator<int> iter1(ifs);
	istream_iterator<int> iter2;

	list<int> mylist(iter1, iter2);

	cout << "list size = " << mylist.size() << endl;

	mylist.reverse();
	for (auto &r : mylist)
		cout << r << " ";
	cout << endl;

	return 0;
}