

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
#include <vector>
#include <initializer_list>
#include <string>
#include <deque>
#include <algorithm>
#include "date.h"
#include "cupa.h"
#include <iostream>
#include <list>
#include <functional>
#include <set>
#include <map>
#include <ctime>
#include <iomanip>
#include <fstream>

#include "date.h"

using namespace std;


int main()
{
	ifstream ifs("poem.txt");

	if (!ifs) {
		cout << "acilamadi" << endl;
		return 1;
	}

	char c;

	while (ifs.get(c))
		//if (ispunct(c))
		cout << c;

	cout << endl;

	return 0;
}