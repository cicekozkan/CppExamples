// Homework: A program to find if an opened parenthesis closed or not
#include <string>
#include <iostream>
#include <stack>

using namespace std;


bool isMatch(const string &r)
{
	stack<char> cstack;
	const string s_op = "({<[";
	const string s_cl = ")}>]";

	for (const auto &c : r) {
		if (s_op.find(c) != string::npos)
			cstack.push(c);
		else {
			auto idx = s_cl.find(c);
			if (idx != string::npos) {
				if (cstack.empty() || cstack.top() != s_op[idx]) {
					return false;
				}
				cstack.pop();
			}
		}
	}
	return cstack.empty();
}

int main()
{
	string s;

	cout << "giris yapin : ";
	cin >> s;

	if (isMatch(s))
		cout << "uyumlu" << endl;
	else
		cout << "uyumsuz" << endl;

	return 0;
}