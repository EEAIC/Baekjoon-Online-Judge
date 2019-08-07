#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int *A = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	stable_sort(A, A + N);

	for (int i = 0; i < N; i++) {
		cout << A[i] << "\n";
	}

	delete[] A;
	return 0;
}