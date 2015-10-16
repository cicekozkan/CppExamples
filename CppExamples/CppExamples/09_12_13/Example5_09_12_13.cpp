// An example to typedef and using keywords
#include <list>
#include <vector>

//typedef std::list<double> Dlist;
//typedef std::vector<Dlist> ListVec;

using Dlist = std::list<double>;
using ListVec = std::vector<Dlist>;


int main()
{
	ListVec myvec;

	return 0;
}


