#include "fighter.h"
#include <iostream>


using namespace std;

int Fighter::ms_age_limit = 20;
list<Fighter *> Fighter::ms_list;

void Fighter::getHelp()
{
	for (auto ptr : ms_list) {
		if (ptr != this && ptr->getAge() > ms_age_limit)
			cout << ptr->getName() << " ";
	}
}

Fighter::~Fighter()
{
	ms_list.remove(this);
}

