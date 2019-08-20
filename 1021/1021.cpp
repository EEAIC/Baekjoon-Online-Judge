#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, V;
	int cnt = 0;
	cin >> N >> M;
	deque<int> dq;
	deque<int>::iterator it;
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	for (int j = 0; j < M; j++) {
		cin >> V;
		while (dq.front() != V) {
			it = find(dq.begin(), dq.end(), V);
			if ((unsigned int)distance(dq.begin(), it) <= dq.size() / 2) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
			else {
				dq.push_front(dq.back());
				dq.pop_back();
			}
			cnt++;
		}
		dq.pop_front();
	}
	cout << cnt;


	return 0;
}