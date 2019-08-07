#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int rst = 0;
	cin >> N;
	int *A = new int[N];
	int *B = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	sort(A, A + N, greater<int>()); 
	sort(B, B + N);

	for (int i = 0; i < N; i++) {
		rst += A[i] * B[i];
	}

	cout << rst;
	return 0;
}