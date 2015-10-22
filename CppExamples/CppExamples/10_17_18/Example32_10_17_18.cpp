// you can pass any compare function to priority_queue
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main()
{
	priority_queue<int, std::vector<int>, greater<int>> pq;

	for (auto x : { 13, 27, 5, 59, 34, 20, 2, 40 })
		pq.push(x);

	while (!pq.empty()) {
		cout << pq.top();
		getchar();
		pq.pop();
	}

	return 0;
}