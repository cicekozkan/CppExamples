// example to priority queue
// A priority queue is a container adaptor that provides constant time lookup of the largest(by default) element, at the expense of logarithmic insertion and extraction.
// A user - provided Compare can be supplied to change the ordering, e.g. using std::greater<T> would cause the smallest element to appear as the top().
// Working with a priority_queue is similar to managing a heap in some random access container, with the benefit of not being able to accidentally invalidate the heap.
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int> pq;

	for (auto x : { 13, 27, 5, 59, 34, 20, 2, 40 })
		pq.push(x);

	while (!pq.empty()) {
		cout << pq.top();
		getchar();
		pq.pop();
	}

	return 0;
}