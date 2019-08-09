#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N, K;
	int step = 1;
	cin >> N >> K;
	queue<int> que;
	for (int i = 1; i <= N; i++) {
		que.push(i);
	}

	cout << "<";
	while (!que.empty()) {
		
		if (step == K) {
			cout << que.front();
			if (que.size() != 1) {
				cout << ", ";
			}
			que.pop();
			step = 1;
		}
		else {
			que.push(que.front());
			que.pop();
			step++;
		}	
	}

	cout << ">";

	return 0;
}