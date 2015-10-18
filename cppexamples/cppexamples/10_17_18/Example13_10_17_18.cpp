// function<> classes can be used to return a callable from a function

#include <functional>

using namespace std;

// someone in the class asked about this topic.
// that's why the teacher explained it again
template<class T, class U>
auto func(T x, U y)->decltype(x + y)
{
	return x + y;
}

// the real purpose of this example
// function<> classes can be used to return callables from functions
std::function<int(int)> func()
{
	auto f = [](int x) {return x; };
	///////
	return f;
}

int main()
{

	return 0;
}