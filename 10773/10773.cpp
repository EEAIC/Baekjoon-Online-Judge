#include <iostream>
#include <stack>

using namespace std;

int main() {
	int K, V;
	int rst = 0;
	cin >> K;
	stack<int> stk;

	for (int i = 0; i < K; i++) {
		cin >> V;
		if (V) {
			stk.push(V);
		} else {
			stk.pop();
		}
	}

	while (!(stk.empty())) {
		rst += stk.top();
		stk.pop();
	}

	cout << rst;
	
	return 0;
}