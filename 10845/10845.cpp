#include <iostream>
#include <string>
#include <queue>

using namespace std;


int main() {
	int N;
	int num;
	cin >> N;
	string cmd;
	queue<int> que;
	for (int i = 0; i < N; i++) {
		cin >> cmd;

		if (cmd == "push") {
			cin >> num;
			que.push(num);
		}
		else if (cmd == "front") {
			if (que.empty()) cout << "-1\n";
			else cout << que.front() << "\n";
		} else if (cmd == "size") {
			cout << que.size() << "\n";
		}
		else if (cmd == "back") {
			if (que.empty()) cout << "-1\n";
			else cout << que.back() << "\n";
		}
		else if (cmd == "empty") {
			cout << que.empty() << "\n";
		}
		else if (cmd == "pop") {
			if (que.empty()) {
				cout << "-1\n";
			}
			else {
				cout << que.front() << "\n";
				que.pop();
			}
		}
	}

	return 0;
}