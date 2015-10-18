// Introduction to stack
// The std::stack class is a container adapter that gives the programmer the functionality of a stack
// - specifically, a FILO(first - in, last - out) data structure.
// The class template acts as a wrapper to the underlying container - only a specific set of functions is provided.
// The stack pushes and pops the element from the back of the underlying container, known as the top of the stack.
#include <string>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<string> ms;

	ms.push("ali");
	ms.push("veli");
	ms.push("selami");
	ms.push("hakan");
	ms.push("tuncer");

	while (!ms.empty()) {
		cout << ms.top() << endl;
		ms.pop();
		getchar();
	}

	return 0;
}