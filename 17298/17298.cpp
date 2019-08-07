#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, X;
	cin >> N;
	int *A = new int[N];
	int *B = new int[N];
	stack<int> stk;

	for (int i = 0; i < N; i++) {
		cin >> X;
		A[i] = X;
	}

	for (int i = N - 1; i >= 0; i--) {	
		while (!stk.empty() && A[i] >= stk.top()) {
			stk.pop();
		}

		if (stk.empty()) {
			B[i] = -1;
			stk.push(A[i]);
		}
		else {
			B[i] = stk.top();
			stk.push(A[i]);			
		}
	}

	for (int i = 0; i < N; i++) {
		cout << B[i] << " ";
	}

	delete[] A;
	delete[] B;

	return 0;
}