#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int T, X;
	cin >> T;
	stack<int> stk;
	string cmd;
	for (int i = 0; i < T; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> X;
			stk.push(X);
		}

		if (cmd == "top") {
			if (!stk.empty()) {
				cout << stk.top() << endl;
			}
			else {
				cout << -1 << endl;
			}
		}

		if (cmd == "size") {
			cout << stk.size() << endl;
		}

		if (cmd == "empty") {
			cout << stk.empty() << endl;
		}

		if (cmd == "pop") {
			if (!stk.empty()) {
				cout << stk.top() << endl;
				stk.pop();
			}
			else {
				cout << -1 << endl;
			}
		}
	}
}