#include <iostream>

using namespace std;

int main() {
	int T, k,n;
	int sum = 0;
	int a[15][15] = { 0, };
	for (int i = 1; i < 15; i++) {
		a[0][i] = i;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			sum = 0;
			for (int k = 1; k <= j; k++) {
				sum += a[i - 1][k];
			}
			a[i][j] = sum;
		}
	}
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << a[k][n] << "\n";
	}

	return 0;
}