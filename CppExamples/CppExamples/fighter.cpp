#include "fighter.h"
#include <iostream>

using namespace std;

int Fighter::ms_age_limit = 20;		// do not write static in implemetation
list<Fighter *> Fighter::ms_list;	// do not write static in implemetation

void Fighter::getHelp()	// implement the member function
{
	for (auto ptr : ms_list) {	// range based for loop with auto keyword
		if (ptr != this && ptr->getAge() > ms_age_limit)	// inside a member function implementation you do not need
			cout << ptr->getName() << " ";					// to use resolution operator :: to use static variable
	}
}

Fighter::~Fighter()	// your class uses a resource: a list with class pointer. you have to implement a destructor
{					// and free the resources
	ms_list.remove(this);
}

