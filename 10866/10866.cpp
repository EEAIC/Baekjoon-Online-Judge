#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
	int N, V;
	string cmd;
	cin >> N;
	deque<int> dq;
	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == "push_back") {
			cin >> V;
			dq.push_back(V);
		}
		else if (cmd == "push_front") {
			cin >> V;
			dq.push_front(V);
		} else if (cmd == "front") {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << "\n";
			}
		} else if (cmd == "back") {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << "\n";
			}
		} else if (cmd == "pop_front") {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		} else if (cmd == "pop_back") {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		} else if (cmd == "empty") {
			cout << dq.empty() << "\n";
		} else if (cmd == "size") {
			cout << dq.size() << "\n";
		}
	}

	return 0;
}